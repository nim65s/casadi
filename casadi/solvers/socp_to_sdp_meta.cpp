/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010 by Joel Andersson, Moritz Diehl, K.U.Leuven. All rights reserved.
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */


      #include "socp_to_sdp.hpp"
      #include <string>

      const std::string casadi::SocpToSdp::meta_doc=
      "\n"
"Solve SOCPs using an SdpSolver\n"
"\n"
"\n"
">List of available options\n"
"\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"|       Id        |      Type       |     Default     |   Description   |\n"
"+=================+=================+=================+=================+\n"
"| sdp_solver      | OT_STRING       | GenericType()   | The SdpSolver   |\n"
"|                 |                 |                 | used to solve   |\n"
"|                 |                 |                 | the SOCPs.      |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"| sdp_solver_opti | OT_DICTIONARY   | GenericType()   | Options to be   |\n"
"| ons             |                 |                 | passed to the   |\n"
"|                 |                 |                 | SDPSOlver       |\n"
"+-----------------+-----------------+-----------------+-----------------+\n"
"\n"
"\n"
">List of available stats\n"
"\n"
"+------------------+\n"
"|        Id        |\n"
"+==================+\n"
"| sdp_solver_stats |\n"
"+------------------+\n"
"\n"
"\n"
"\n"
"\n"
;