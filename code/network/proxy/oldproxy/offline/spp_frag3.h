/* $Id$ */

/*
** Copyright (C) 2004-2008 Sourcefire, Inc.
** Copyright (C) 1998-2004 Martin Roesch <roesch@sourcefire.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef __SPP_FRAG3_H__
#define __SPP_FRAG3_H__
#include "decode.h"
//#include "fpcreate.h" wxh
void SetupFrag3(void);

#ifdef DETECTION_OPTION_TREE
//int fpAddFragAlert(Packet *p, OptTreeNode *otn); wxh
//int fpFragAlerted(Packet *p, OptTreeNode *otn);
#else
//int fpAddFragAlert(Packet *p, OTNX *otnx);
//int fpFragAlerted(Packet *p, OTNX *otnx);
#endif

void Frag3Defrag(Packet *p, void *context);
void Frag3Init(char *args);
void Frag3GlobalInit(char *args);

#ifdef TARGET_BASED
int fragGetApplicationProtocolId(Packet *p);
#endif
#endif
