//-----------------------------------------------------------------------bl-
//--------------------------------------------------------------------------
// 
// GRINS - General Reacting Incompressible Navier-Stokes 
//
// Copyright (C) 2010,2011 The PECOS Development Team
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the Version 2 GNU General
// Public License as published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this library; if not, write to the Free Software
// Foundation, Inc. 51 Franklin Street, Fifth Floor, Boston, MA
// 02110-1301 USA
//
//-----------------------------------------------------------------------el-
//
// $Id$
//
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------

#ifndef SOLVER_FACTORY_H
#define SOLVER_FACTORY_H

//libMesh
#include "auto_ptr.h"
#include "getpot.h"

//GRINS
#include "grins_solver.h"
#include "steady_solver.h"
#include "unsteady_solver.h"

namespace GRINS
{
  //! This object handles constructing the solver to be used.
  /*! To allow the user to easily extend the (limited) available solvers,
      the solver construction is handled in this object. Note that a
      libMesh::AutoPtr is returned to transfer ownership away from this class.
  */
  class SolverFactory
  {
  public:

    SolverFactory(const GetPot& input);
    virtual ~SolverFactory();

    //! Builds GRINS::Solver object.
    /*! Users should override this method to construct 
        their own solvers. Note that a libMesh::AutoPtr is 
	returned to transfer ownership away from this class. */
    virtual libMesh::AutoPtr<GRINS::Solver> build();

  protected:

    //! All we need to distinguish between steady and unsteady solver.
    bool _transient;

    const GetPot& _input;

  };
}
#endif //SOLVER_FACTORY_H