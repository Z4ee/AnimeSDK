#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB;

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEB3640)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB3680)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__REPLACE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1AEB3690)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer___c_TypeDefinitionIndex = 86659;

	class UITextTagReplacer___c : public ::System::Object
	{
	public:
		static ::Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB** StaticGet___9__3_0()
		{
			return (::Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer___c_TypeDefinitionIndex)->GetStaticField(0x3D500);
		}
		static ::UnityEngine::UI::Extension::UITextTagReplacer___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UITextTagReplacer___c**)Il2CppClass::FromTypeDefinitionIndex(UITextTagReplacer___c_TypeDefinitionIndex)->GetStaticField(0x3D508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Replace_b__3_0(::System::UInt16 token, ::System::UInt16 start, ::System::UInt16 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER___C__REPLACE_B__3_0_OFFSET))(this, token, start, end);
		}
	};
}
