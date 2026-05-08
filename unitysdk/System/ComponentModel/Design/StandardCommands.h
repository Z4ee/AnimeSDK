#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel::Design { class CommandID; }

#define SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA92210)
#define SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA92200)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int StandardCommands_TypeDefinitionIndex = 3093;

	class StandardCommands : public ::System::Object
	{
	public:
		static ::System::ComponentModel::Design::CommandID** StaticGet_CenterVertically()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3800);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Paste()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3808);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SnapToGrid()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_MultiLevelRedo()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3818);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_HorizSpaceDecrease()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3820);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VertSpaceIncrease()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3828);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_HorizSpaceIncrease()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3830);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_LockControls()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3838);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SizeToControl()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3840);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Group()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3848);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SendToBack()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3850);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ShowLargeIcons()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3858);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_F1Help()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3860);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Replace()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3868);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ArrangeIcons()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3870);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SizeToControlWidth()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3878);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignRight()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3880);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_HorizSpaceConcatenate()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3888);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignToGrid()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3890);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Undo()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3898);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SizeToControlHeight()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38A0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignBottom()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38A8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ArrangeBottom()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38B0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Ungroup()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38B8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_BringForward()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38C0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_MultiLevelUndo()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38C8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Properties()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38D0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignHorizontalCenters()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38D8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VertSpaceMakeEqual()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38E0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SizeToFit()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38E8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Redo()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38F0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignLeft()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x38F8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_HorizSpaceMakeEqual()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VerbLast()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3908);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_BringToFront()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_DocumentOutline()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3918);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SelectAll()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3920);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignTop()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3928);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_PropertiesWindow()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_LineupIcons()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3938);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ViewGrid()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SizeToGrid()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3948);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_CenterHorizontally()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VertSpaceConcatenate()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3958);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Copy()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VerbFirst()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_AlignVerticalCenters()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3970);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Cut()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3978);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ArrangeRight()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3980);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ViewCode()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3988);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_SendBackward()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3990);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_VertSpaceDecrease()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x3998);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_Delete()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x39A0);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_TabOrder()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x39A8);
		}
		static ::System::ComponentModel::Design::CommandID** StaticGet_ShowGrid()
		{
			return (::System::ComponentModel::Design::CommandID**)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x39B0);
		}
		static ::System::Guid* StaticGet_standardCommandSet()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x1430);
		}
		static ::System::Guid* StaticGet_ndpCommandSet()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_TypeDefinitionIndex)->GetStaticField(0x1440);
		}
		// static const ::System::Int32 cmdidDesignerVerbFirst = 0x2000; // 0x0
		// static const ::System::Int32 cmdidDesignerVerbLast = 0x2100; // 0x0
		// static const ::System::Int32 cmdidArrangeIcons = 0x300A; // 0x0
		// static const ::System::Int32 cmdidLineupIcons = 0x300B; // 0x0
		// static const ::System::Int32 cmdidShowLargeIcons = 0x300C; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS__CCTOR_OFFSET))();
		}
	};
}
