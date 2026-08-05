#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SwitchAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1DEA73B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1DEA73C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_WRITE_OFFSET UNITYSDK_OFFSET(0x1DEA7560)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA76C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA7680)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup_Class_3_64B4E6B024444FF9_TypeDefinitionIndex = 50419;

	class UITabButtonGroup_Class_3_64B4E6B024444FF9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UITabButtonGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup_Class_3_64B4E6B024444FF9_TypeDefinitionIndex)->GetStaticField(0x4EF80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup_Class_3_64B4E6B024444FF9_TypeDefinitionIndex)->GetStaticField(0x4EF88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UITabButtonGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UITabButtonGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_CLASS_3_64B4E6B024444FF9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
