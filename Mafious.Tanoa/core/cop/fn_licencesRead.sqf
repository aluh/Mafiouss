/*
    File: fn_licencesRead.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description:
    Outprints the licences.
*/
params [
    ["_civ","",[""]],
    ["_licences",(localize "STR_Cop_NoLicences"),[""]]
];

hint parseText format["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'>" +(localize "STR_Cop_Licences")+ "</t></t><br/>%2",_civ,_licences];