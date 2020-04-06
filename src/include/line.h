#ifndef LINE_H
# define LINE_H

# include <stdio.h>
# include <string.h>

# define MAX_LINE_LEN 60

char g_line[MAX_LINE_LEN+1];
extern int g_line_len;
extern int g_num_words;

/*!
* @brief Clears the current line.
*/
void clear_line(void);

/*!
 * @brief Adds word to the end of the current line.
 * If this is not the first word on the line,
 * puts one space before word.
 * @param word
 */
void add_word(const char *word);

/*!
* @brief Returns the number of characters left
* in the current line.
*/
int space_remaining(void);

/*!
 * @brief Writes the current line with
 * justification.
 */
void write_line(void);

/*!
 * @brief Writes the current line without
 * justification. If the line is empty, does
 * nothing.
 */
void flush_line(void);

#endif
