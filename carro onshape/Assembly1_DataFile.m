% Simscape(TM) Multibody(TM) version: 7.1

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(3).translation = [0.0 0.0 0.0];
smiData.RigidTransform(3).angle = 0.0;
smiData.RigidTransform(3).axis = [0.0 0.0 0.0];
smiData.RigidTransform(3).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [-27.111848000000002 -104.56871299999999 54.701468000000006];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = 'RootGround[M6Q66BGFfpdbC3zU3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-27.111848000000002 -104.56871299999999 54.701468000000006];  % mm
smiData.RigidTransform(2).angle = 0;  % rad
smiData.RigidTransform(2).axis = [0 0 0];
smiData.RigidTransform(2).ID = 'SixDofRigidTransform[MRki73keIlf8sq1ou]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [-27.111848000000002 -104.56871299999999 54.701468000000006];  % mm
smiData.RigidTransform(3).angle = 0;  % rad
smiData.RigidTransform(3).axis = [0 0 0];
smiData.RigidTransform(3).ID = 'SixDofRigidTransform[MB+0qZvU4YQ6VQmf8]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(3).mass = 0.0;
smiData.Solid(3).CoM = [0.0 0.0 0.0];
smiData.Solid(3).MoI = [0.0 0.0 0.0];
smiData.Solid(3).PoI = [0.0 0.0 0.0];
smiData.Solid(3).color = [0.0 0.0 0.0];
smiData.Solid(3).opacity = 0.0;
smiData.Solid(3).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0;  % kg
smiData.Solid(1).CoM = [0 0 0];  % mm
smiData.Solid(1).MoI = [0 0 0];  % kg*mm^2
smiData.Solid(1).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(1).color = [0.647058824 0.647058824 0.647058824];
smiData.Solid(1).opacity = 1.000000000;
smiData.Solid(1).ID = 'J2H*:*a63b3b3bf48d3d447cdf8b37';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0;  % kg
smiData.Solid(2).CoM = [0 0 0];  % mm
smiData.Solid(2).MoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).color = [0.901960784 0.878431373 0.811764706];
smiData.Solid(2).opacity = 1.000000000;
smiData.Solid(2).ID = 'JHD*:*a63b3b3bf48d3d447cdf8b37';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0;  % kg
smiData.Solid(3).CoM = [0 0 0];  % mm
smiData.Solid(3).MoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [0.615686275 0.811764706 0.929411765];
smiData.Solid(3).opacity = 1.000000000;
smiData.Solid(3).ID = 'J2D*:*a63b3b3bf48d3d447cdf8b37';

