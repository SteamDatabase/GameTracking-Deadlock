--========= Copyright (c) Valve Corporation. All Rights Reserved. ============

Weapon = class({}, {}, nil)

----------------------------------------------------------------------------------------------------------
-- Override these for custom weapon behaviors
----------------------------------------------------------------------------------------------------------
function Weapon:ItemPostFrame() 
    
end

function Weapon:PrimaryAttack() 
    
end

function Weapon:SecondaryAttack() 
    
end

function Weapon:RunSpeed(originalRunSpeed) 
    return originalRunSpeed
end


----------------------------------------------------------------------------------------------------------
-- All weapon data tables go in here
----------------------------------------------------------------------------------------------------------
g_Weapons = {}


----------------------------------------------------------------------------------------------------------
-- All weapon definitions
----------------------------------------------------------------------------------------------------------