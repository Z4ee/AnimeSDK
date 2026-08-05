#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A68A470)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A68A480)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_WRITE_OFFSET UNITYSDK_OFFSET(0x1A68A620)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A68A780)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68A740)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_Class_3_3DDC819024500C1B_TypeDefinitionIndex = 85044;

	class UIButtonEx_Class_3_3DDC819024500C1B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UIButtonEx*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonEx_Class_3_3DDC819024500C1B_TypeDefinitionIndex)->GetStaticField(0x34130);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonEx_Class_3_3DDC819024500C1B_TypeDefinitionIndex)->GetStaticField(0x34138);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UIButtonEx*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UIButtonEx*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLASS_3_3DDC819024500C1B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
