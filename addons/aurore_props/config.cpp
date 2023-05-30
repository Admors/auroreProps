class CfgPatches {
    class object_sandbox {
        requiredAddons[] = {"A3_Structures_F"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgEditorCategories
{
    class Aurore_Props
    {
        displayName="Aurore - Props";
    };
};

class CfgEditorSubcategories
{
    class Aurore_Box
    {
        displayName="Geometry";
    };
};

class CfgVehicles
{
    class Items_base_F;
    class Aurore_BaseItemEditor: Items_base_F
    {
        scope=1;
        scopeCurator=1;
        faction="Empty";
        editorCategory="Aurore_Props";
        editorSubcategory="Aurore_Box";
    };

    class Aurore_Cube: Aurore_BaseItemEditor
    {
        scope=2;
        scopeCurator=2;
        displayName="Cube";
        model="\aurore_props\model\cube.p3d";
        maximumLoad=1000;
        transportMaxBackpacks=1;
        transportMaxMagazines=24;
        transportMaxWeapons=4;
        class SimpleObject
        {
            eden = 1;
        };
    };

    class Aurore_Fence: Aurore_BaseItemEditor
    {
        scope=2;
        scopeCurator=2;
        displayName="Fence";
        model="\aurore_props\model\fence_SixOne.p3d";
        class SimpleObject
        {
            eden = 1;
        };
    };

};
