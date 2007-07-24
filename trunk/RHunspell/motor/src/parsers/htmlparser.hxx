/*
 * HTML parser class for MySpell
 *
 * implemented: text, HTML, TeX
 *
 * Copyright (C) 2002, Laszlo Nemeth
 *
 */

#ifndef _HTMLPARSER_HXX_
#define _HTMLPARSER_HXX_


#include "textparser.hxx"

/*
 * HTML Parser
 *
 */

class HTMLParser : public TextParser
{
public:
 
  HTMLParser(const char * wc);
  HTMLParser(struct unicode_info2 * uconv, unsigned short * wordchars, int len);
  virtual ~HTMLParser();

  virtual char *              next_token();

private:

  int                 look_pattern(char * p[][2], unsigned int len, int column);
  int                 pattern_num;
  int                 pattern2_num;
  int		      prevstate;
  int                 checkattr;
  char		      quotmark;

};


#endif

