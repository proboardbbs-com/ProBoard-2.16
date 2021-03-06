#include <string.h>
#include "proboard.hpp"

void
version_info(char *)
{
LOG(2,"Version info requested");

io << "\f\n\7"
  " 旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커\n"
  " � ProBoard version " VERSION;

for(int i=0;i<22-strlen(VERSION);i++) io << ' ';
io << "\1(c) 1990-1996 Philippe Leybaert \7�\n"
          " �                                                                        �\n";
  io << "\7 � Written by \3Philippe Leybaert\7.                                          �\n";
  io << "\7 냐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캐\n"
        "\7 �                                                                        �\n";

if(registered)
   {
      io << "\7 � \7Registered to:\6 " << form("%-36s",regis.sysopName) << "\7                    �\n"
            "\7 �                \6" <<   form("%-36s",regis.bbsName) << "\7                    �\n"
            "\7 �                                                                        �\n";
   }
else io << " � \6UNREGISTERED EVALUATION VERSION                                        �\n"
         "\7 �                                                                        �\n";


if(regis.beta || regis.distSite)
   io << "\7 냐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캐\n"
         "\7 �                                                                        �\n";


if(regis.beta)
  {
   io << "\7 �\x12 Official ProBoard beta-site\7  컴컴컴�  Compiled: \6" __DATE__ " , " __TIME__ " \7�\n"
         "\7 �                                                                        �\n";
  }

if(regis.distSite)
  {
 io << "\7 �\2 Official ProBoard Distribution Site                                    \7�\n"
       "\7 �                                                                        �\n";
  }

 io << "\7 냐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캐\n";

 io <<   " � JAM(mbp) - Copyright 1993 Joaquim Homrighausen, Andrew Milner,         �\n"
         " �                           Mats Birch, Mats Wallin.                     �\n"
         " �                           ALL RIGHTS RESERVED.                         �\n";
 io << "\7 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸\n\n  "
    << S_PRESS_ENTER_TO_CONTINUE;
}

