// A74. Write a program to simulate music player application using suitable data
// structure. There is no estimation about number of music files to be managed by
// the music player. Your program should support all the basic music player
// operations to play and manage the playlist.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song
{
    char name[100];
    struct Song *prev;
    struct Song *next;
};

struct Song *head = NULL, *tail = NULL, *current = NULL;

void addSong()
{
    struct Song *newSong = (struct Song *)malloc(sizeof(struct Song));
    if (!newSong)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter song name: ");
    getchar();
    fgets(newSong->name, 100, stdin);
    newSong->name[strcspn(newSong->name, "\n")] = 0;

    newSong->prev = NULL;
    newSong->next = NULL;

    if (head == NULL)
    {
        head = tail = current = newSong;
    }
    else
    {
        tail->next = newSong;
        newSong->prev = tail;
        tail = newSong;
    }

    printf("'%s' added to the playlist.\n", newSong->name);
}

void displayPlaylist()
{
    if (head == NULL)
    {
        printf("Playlist is empty.\n");
        return;
    }

    struct Song *temp = head;
    printf("\n--- Playlist ---\n");
    while (temp != NULL)
    {
        if (temp == current)
            printf(">> %s (Currently Playing)\n", temp->name);
        else
            printf("   %s\n", temp->name);
        temp = temp->next;
    }
    printf("----------------\n");
}

void playCurrent()
{
    if (current == NULL)
        printf("No song is currently playing.\n");
    else
        printf("Playing: %s\n", current->name);
}

void nextSong()
{
    if (current == NULL)
    {
        printf("Playlist is empty.\n");
    }
    else if (current->next == NULL)
    {
        printf("This is the last song in the playlist.\n");
    }
    else
    {
        current = current->next;
        playCurrent();
    }
}

void previousSong()
{
    if (current == NULL)
    {
        printf("Playlist is empty.\n");
    }
    else if (current->prev == NULL)
    {
        printf("This is the first song in the playlist.\n");
    }
    else
    {
        current = current->prev;
        playCurrent();
    }
}

void deleteSong()
{
    if (head == NULL)
    {
        printf("Playlist is empty.\n");
        return;
    }

    char target[100];
    printf("Enter song name to delete: ");
    getchar(); // consume newline
    fgets(target, 100, stdin);
    target[strcspn(target, "\n")] = 0;

    struct Song *temp = head;

    while (temp != NULL)
    {
        if (strcmp(temp->name, target) == 0)
        {
            if (temp == head)
                head = temp->next;
            if (temp == tail)
                tail = temp->prev;
            if (temp->prev)
                temp->prev->next = temp->next;
            if (temp->next)
                temp->next->prev = temp->prev;

            if (temp == current)
                current = temp->next ? temp->next : temp->prev;

            free(temp);
            printf("Song '%s' deleted from playlist.\n", target);
            return;
        }
        temp = temp->next;
    }

    printf("Song '%s' not found.\n", target);
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Music Player ---\n");
        printf("1. Add Song\n");
        printf("2. Display Playlist\n");
        printf("3. Play Current Song\n");
        printf("4. Next Song\n");
        printf("5. Previous Song\n");
        printf("6. Delete Song\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addSong();
            break;
        case 2:
            displayPlaylist();
            break;
        case 3:
            playCurrent();
            break;
        case 4:
            nextSong();
            break;
        case 5:
            previousSong();
            break;
        case 6:
            deleteSong();
            break;
        case 0:
            printf("Exiting Music Player. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
