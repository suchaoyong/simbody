/* -------------------------------------------------------------------------- *
 *                      SimTK Core: SimTK Simbody(tm)                         *
 * -------------------------------------------------------------------------- *
 * This is part of the SimTK Core biosimulation toolkit originating from      *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2008 Stanford University and the Authors.           *
 * Authors: Peter Eastman                                                     *
 * Contributors:                                                              *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * The above copyright notice and this permission notice shall be included in *
 * all copies or substantial portions of the Software.                        *
 *                                                                            *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
 * THE AUTHORS, CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,    *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
 * USE OR OTHER DEALINGS IN THE SOFTWARE.                                     *
 * -------------------------------------------------------------------------- */


#include "SimTKcommon.h"
#include "simbody/internal/common.h"
#include "SimTKcommon/internal/PrivateImplementation_Defs.h"


// This suppresses the 'extern template' instantiations in Constraint.h so that
// we can instantiate them for real here.
#define SimTK_SIMBODY_DEFINING_CONSTRAINT
#include "simbody/internal/Constraint.h"
#include "ConstraintImpl.h"

namespace SimTK {

template class PIMPLHandle<Constraint, ConstraintImpl>;
template class PIMPLImplementation<Constraint, ConstraintImpl>;
template class PIMPLDerivedHandle<Constraint::Rod, Constraint::RodImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::Ball, Constraint::BallImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::Weld, Constraint::WeldImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::PointInPlane, Constraint::PointInPlaneImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::PointOnLine, Constraint::PointOnLineImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::ConstantAngle, Constraint::ConstantAngleImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::ConstantOrientation, Constraint::ConstantOrientationImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::NoSlip1D, Constraint::NoSlip1DImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::ConstantSpeed, Constraint::ConstantSpeedImpl, Constraint>;
template class PIMPLDerivedHandle<Constraint::Custom, Constraint::CustomImpl, Constraint>;

} // namespace SimTK
