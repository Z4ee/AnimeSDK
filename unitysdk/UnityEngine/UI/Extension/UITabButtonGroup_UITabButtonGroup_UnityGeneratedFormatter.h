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

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18EBF5B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18EBF5C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18EBF7A0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EBF940)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBF900)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup_UITabButtonGroup_UnityGeneratedFormatter_TypeDefinitionIndex = 73576;

	class UITabButtonGroup_UITabButtonGroup_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UITabButtonGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>*>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup_UITabButtonGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49790);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_SwitchAction*>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup_UITabButtonGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49798);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UITabButtonGroup*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UITabButtonGroup*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP_UITABBUTTONGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
