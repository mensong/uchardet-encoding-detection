/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsLanguageDetector.h"

/********* Language model for: Belarusian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-17 18:49:26.830966
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Windows_1251_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 46, 42, 43, 32, 55, 49, 45, 31, 57, 51, 41, 48, 35, 36, /* 4X */
   47, 62, 38, 37, 39, 44, 50, 54, 53, 52, 56,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 46, 42, 43, 32, 55, 49, 45, 31, 57, 51, 41, 48, 35, 36, /* 6X */
   47, 62, 38, 37, 39, 44, 50, 54, 53, 52, 56,SYM,SYM,SYM,SYM,CTR, /* 7X */
   65, 66,SYM, 67,SYM,SYM,SYM,SYM,SYM,SYM, 68,SYM, 69, 70, 71, 64, /* 8X */
   72,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 73,SYM, 74, 75, 76, 64, /* 9X */
  SYM, 20, 20, 77,SYM, 63,SYM,SYM, 33,SYM, 61,SYM,SYM,SYM,SYM, 60, /* AX */
  SYM,SYM,  2,  2, 63,SYM,SYM,SYM, 33,SYM, 61,SYM, 78, 79, 80, 60, /* BX */
    0, 21, 11, 19, 12,  8, 28, 17, 40, 24,  5,  7, 15,  1, 13, 16, /* CX */
    3,  4,  9, 14, 30, 26, 18, 23, 27, 59, 58,  6, 25, 22, 29, 10, /* DX */
    0, 21, 11, 19, 12,  8, 28, 17, 40, 24,  5,  7, 15,  1, 13, 16, /* EX */
    3,  4,  9, 14, 30, 26, 18, 23, 27, 59, 58,  6, 25, 22, 29, 10, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 46, 42, 43, 32, 55, 49, 45, 31, 57, 51, 41, 48, 35, 36, /* 4X */
   47, 62, 38, 37, 39, 44, 50, 54, 53, 52, 56,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 46, 42, 43, 32, 55, 49, 45, 31, 57, 51, 41, 48, 35, 36, /* 6X */
   47, 62, 38, 37, 39, 44, 50, 54, 53, 52, 56,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 33, 81, 82, 61, 83,  2, 60, 84, 85, 86, 87, 88,SYM, 20, 64, /* AX */
    0, 21, 11, 19, 12,  8, 28, 17, 40, 24,  5,  7, 15,  1, 13, 16, /* BX */
    3,  4,  9, 14, 30, 26, 18, 23, 27, 59, 58,  6, 25, 22, 29, 10, /* CX */
    0, 21, 11, 19, 12,  8, 28, 17, 40, 24,  5,  7, 15,  1, 13, 16, /* DX */
    3,  4,  9, 14, 30, 26, 18, 23, 27, 59, 58,  6, 25, 22, 29, 10, /* EX */
  SYM, 33, 89, 90, 61, 91,  2, 60, 92, 93, 94, 95, 96,SYM, 20, 64, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 68;
static const unsigned int Unicode_CharOrder[] =
{
    69, 32,   73, 31,  101, 32,  105, 31, 1025, 33, 1030,  2, 1038, 20,1040,  0,
  1041, 21, 1042, 11, 1043, 19, 1044, 12, 1045,  8, 1046, 28, 1047, 17,1049, 24,
  1050,  5, 1051,  7, 1052, 15, 1053,  1, 1054, 13, 1055, 16, 1056,  3,1057,  4,
  1058,  9, 1059, 14, 1060, 30, 1061, 26, 1062, 18, 1063, 23, 1064, 27,1067,  6,
  1068, 25, 1069, 22, 1070, 29, 1071, 10, 1072,  0, 1073, 21, 1074, 11,1075, 19,
  1076, 12, 1077,  8, 1078, 28, 1079, 17, 1081, 24, 1082,  5, 1083,  7,1084, 15,
  1085,  1, 1086, 13, 1087, 16, 1088,  3, 1089,  4, 1090,  9, 1091, 14,1092, 30,
  1093, 26, 1094, 18, 1095, 23, 1096, 27, 1099,  6, 1100, 25, 1101, 22,1102, 29,
  1103, 10, 1105, 33, 1110,  2, 1118, 20,
};


/* Model Table:
 * Total considered sequences: 1518 / 1156
 * - Positive sequences: first 893 (0.9950100888151092)
 * - Probable sequences: next 272 (1165-893) (0.003995003102100991)
 * - Neutral sequences: last -9 (0.0009949080827897916)
 * - Negative sequences: -362 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 BelarusianLangModel[] =
{
  3,3,3,3,3,3,0,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,1,0,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,0,2,3,3,0,3,2,3,3,3,3,2,0,3,
  3,3,3,3,3,3,1,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,1,0,3,
  3,3,2,2,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,0,3,3,3,1,2,3,3,3,1,3,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,3,2,0,3,3,3,0,3,3,2,0,3,3,1,0,3,
  3,3,3,3,3,3,1,3,3,3,2,3,2,3,3,3,3,3,3,2,0,2,1,1,0,0,0,2,0,2,1,2,0,2,
  2,3,3,3,3,3,0,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,1,0,3,
  3,3,3,2,3,3,3,3,3,3,3,2,3,3,3,2,2,2,2,3,0,2,3,2,0,3,1,1,1,3,3,2,0,3,
  3,3,3,3,3,3,0,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,0,3,3,0,3,3,3,2,3,0,0,0,
  3,3,2,3,3,3,3,3,3,3,1,3,1,3,3,3,1,1,3,2,0,3,3,3,0,3,2,0,1,2,2,0,0,0,
  1,3,1,3,3,3,0,3,3,3,3,3,3,2,1,3,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,0,0,0,
  3,3,3,2,3,3,3,2,3,3,3,1,2,3,3,1,3,1,1,2,0,2,2,0,0,2,0,1,1,3,1,2,0,3,
  3,3,2,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,0,3,3,3,0,2,2,2,3,1,1,0,0,0,
  1,3,3,3,3,3,0,3,3,3,3,3,3,1,2,3,3,3,3,3,3,3,2,3,3,0,3,3,3,3,3,0,0,0,
  3,3,3,3,3,3,0,3,3,3,2,3,3,2,2,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,2,0,0,1,
  3,3,3,2,3,3,3,3,3,1,3,3,2,3,3,3,3,3,3,1,0,3,3,2,0,0,1,1,0,2,3,1,0,3,
  3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,1,2,2,3,0,0,3,3,3,0,0,1,3,0,0,1,1,0,3,
  3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,1,2,2,3,0,3,3,2,0,3,0,3,1,3,1,1,0,3,
  3,3,3,1,2,3,3,3,3,3,3,3,1,3,3,2,1,1,3,2,0,1,3,0,1,3,1,1,0,3,0,1,0,3,
  3,3,3,3,3,3,1,3,3,2,0,3,3,3,3,3,1,0,0,3,0,2,3,3,0,0,0,1,0,1,0,1,0,1,
  0,3,2,3,3,3,0,3,3,3,3,3,3,0,1,3,3,3,3,3,0,3,1,3,0,0,2,3,3,0,2,0,0,1,
  3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,2,1,2,1,0,0,2,2,0,1,2,2,1,3,1,0,0,1,
  3,3,3,3,3,3,0,3,2,3,3,3,3,3,1,3,3,3,3,3,3,3,1,3,3,0,3,3,3,2,3,0,0,0,
  3,3,0,0,1,3,3,3,3,1,0,3,1,3,3,2,1,0,1,0,1,2,3,3,0,2,1,0,1,1,0,0,0,1,
  1,3,1,2,3,3,0,3,1,3,1,3,3,1,1,3,2,2,3,3,0,3,1,3,0,0,3,3,0,1,0,0,0,0,
  0,3,2,1,3,3,0,1,3,3,3,3,3,2,1,3,3,1,3,3,0,3,0,2,0,1,2,3,0,2,3,0,0,3,
  3,3,3,3,3,1,0,3,3,3,1,3,1,3,3,3,1,1,2,2,0,2,2,1,0,0,2,0,0,1,0,0,0,1,
  3,3,1,2,2,3,3,3,2,3,0,3,1,3,3,3,3,0,2,1,0,0,3,3,0,0,1,3,0,0,0,0,0,0,
  3,3,0,2,3,3,3,1,2,0,0,3,3,3,3,0,1,1,3,1,0,3,3,2,0,1,0,0,3,0,0,0,0,0,
  1,3,2,3,3,3,0,3,2,3,0,2,3,0,0,2,0,3,3,2,0,3,1,3,0,0,2,3,2,3,3,0,0,0,
  3,2,3,3,3,2,2,3,3,3,2,0,0,3,3,1,0,1,1,1,0,0,3,0,0,0,0,1,0,2,2,1,0,3,
  0,2,1,1,1,2,0,1,0,1,0,0,1,0,0,1,0,1,1,1,0,0,0,2,0,0,0,0,0,0,0,3,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,
  0,3,0,3,3,3,0,3,0,3,0,3,3,0,0,3,2,3,1,3,3,1,1,0,3,0,0,0,1,2,0,0,0,0,
};


const SequenceModel Windows_1251BelarusianModel =
{
  Windows_1251_CharToOrderMap,
  BelarusianLangModel,
  34,
  (float)0.9990050919172102,
  PR_FALSE,
  "WINDOWS-1251",
  "be"
};

const SequenceModel Iso_8859_5BelarusianModel =
{
  Iso_8859_5_CharToOrderMap,
  BelarusianLangModel,
  34,
  (float)0.9990050919172102,
  PR_FALSE,
  "ISO-8859-5",
  "be"
};

const LanguageModel BelarusianModel =
{
  "be",
  Unicode_CharOrder,
  68,
  BelarusianLangModel,
  34,
  6,
  (float)0.42700225938276326,
  26,
  (float)0.030978960449674565,
};