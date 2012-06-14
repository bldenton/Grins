//-----------------------------------------------------------------------bl-
//--------------------------------------------------------------------------
// 
// GRINS - General Reacting Incompressible Navier-Stokes 
//
// Copyright (C) 2010-2012 The PECOS Development Team
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

#ifndef GRINS_PHYSICS_NAMES_H
#define GRINS_PHYSICS_NAMES_H

#include <string>

namespace GRINS
{
  typedef std::string PhysicsName;

  const PhysicsName incompressible_navier_stokes = "IncompressibleNavierStokes";
  const PhysicsName incompressible_navier_stokes_adjoint_stab = 
    "IncompressibleNavierStokesAdjointStabilization";
  const PhysicsName axisymmetric_incomp_navier_stokes = "AxisymmetricIncompressibleNavierStokes";
  const PhysicsName heat_transfer = "HeatTransfer";
  const PhysicsName axisymmetric_heat_transfer = "AxisymmetricHeatTransfer";
  const PhysicsName boussinesq_buoyancy = "BoussinesqBuoyancy";
  const PhysicsName axisymmetric_boussinesq_buoyancy = "AxisymmetricBoussinesqBuoyancy";
  const PhysicsName low_mach_navier_stokes = "LowMachNavierStokes";
  const PhysicsName low_mach_navier_stokes_braack_stab = "LowMachNavierStokesBraackStabilization";
  const PhysicsName low_mach_navier_stokes_vms_stab = "LowMachNavierStokesVMSStabilization";
}

#endif //GRINS_PHYSICS_NAMES_H
