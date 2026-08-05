#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C14D820)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C14D830)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_WRITE_OFFSET UNITYSDK_OFFSET(0x1C14DA90)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14DC50)
#define UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14DC10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UISlider_Class_3_3E63C4C5E5512DE8_TypeDefinitionIndex = 61732;

	class UISlider_Class_3_3E63C4C5E5512DE8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UISlider*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>**)Il2CppClass::FromTypeDefinitionIndex(UISlider_Class_3_3E63C4C5E5512DE8_TypeDefinitionIndex)->GetStaticField(0x41340);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(UISlider_Class_3_3E63C4C5E5512DE8_TypeDefinitionIndex)->GetStaticField(0x41348);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UISlider*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UISlider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UISlider*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UISlider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISLIDER_CLASS_3_3E63C4C5E5512DE8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
