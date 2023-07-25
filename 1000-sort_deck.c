#include "deck.h"



/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Positive byte difference if s1 > s2
 *         0 if s1 == s2
 *         Negative byte difference if s1 < s2
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 != *s2)
return (*s1 - *s2);
return (0);
}


/**
 * get_value - Get the numerical value of a card.
 * @card: A pointer to a deck_node_t card.
 *
 * Return: The numerical value of the card.
 */
char get_value(deck_node_t *card)
{
char value = 13;

value = (_strcmp(card->card->value, "Ace") == 0) ? 0 :
(_strcmp(card->card->value, "1") == 0) ? 1 :
(_strcmp(card->card->value, "2") == 0) ? 2 :
(_strcmp(card->card->value, "3") == 0) ? 3 :
(_strcmp(card->card->value, "4") == 0) ? 4 :
(_strcmp(card->card->value, "5") == 0) ? 5 :
(_strcmp(card->card->value, "6") == 0) ? 6 :
(_strcmp(card->card->value, "7") == 0) ? 7 :
(_strcmp(card->card->value, "8") == 0) ? 8 :
(_strcmp(card->card->value, "9") == 0) ? 9 :
(_strcmp(card->card->value, "10") == 0) ? 10 :
(_strcmp(card->card->value, "Jack") == 0) ? 11 :
(_strcmp(card->card->value, "Queen") == 0) ? 12 : 13;

return (value);
}


/**
 * insertion_sort_deck_kind - Sort a deck of cards from spades to diamonds.
 * @deck: A pointer to the head of a deck_node_t doubly-linked list.
 */

void insertion_sort_deck_kind(deck_node_t **deck)
{
deck_node_t *iter, *insert, *tmp;
for (iter = (*deck)->next; iter != NULL; iter = tmp)
{
tmp = iter->next;
insert = iter->prev;
while (insert != NULL && insert->card->kind > iter->card->kind)
{
insert->next = iter->next;
if (iter->next != NULL)
iter->next->prev = insert;
iter->prev = insert->prev;
iter->next = insert;
if (insert->prev != NULL)
insert->prev->next = iter;
else
*deck = iter;
insert->prev = iter;
insert = iter->prev;
}
}
}


/**
 * insertion_sort_deck_value - Sort a deck of cards sorted from
 *                             spades to diamonds from ace to king.
 * @deck: A pointer to the head of a deck_node_t doubly-linked list.
 */
void insertion_sort_deck_value(deck_node_t **deck)
{
deck_node_t *iter, *insert;
if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
return;
iter = (*deck)->next;
while (iter != NULL)
{
insert = iter->prev;
while (insert != NULL &&
insert->card->kind == iter->card->kind &&
get_value(insert) > get_value(iter))
{
insert->next = iter->next;
if (iter->next != NULL)
iter->next->prev = insert;
iter->prev = insert->prev;
iter->next = insert;
if (insert->prev != NULL)
insert->prev->next = iter;
else
*deck = iter;
insert->prev = iter;
insert = iter->prev;
}
iter = iter->next;
}
}


/**
 * sort_deck - Sort a deck of cards from ace to king and
 *             from spades to diamonds.
 * @deck: A pointer to the head of a deck_node_t doubly-linked list.
 */
void sort_deck(deck_node_t **deck)
{
if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
return;

insertion_sort_deck_kind(deck);
insertion_sort_deck_value(deck);
}
