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

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA4D9F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1DA4DA00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1DA4DBE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DD80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DD40)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_UIButtonEx_UnityGeneratedFormatter_TypeDefinitionIndex = 70891;

	class UIButtonEx_UIButtonEx_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UIButtonEx*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonEx_UIButtonEx_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x457F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionIntending*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonEx_UIButtonEx_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x457F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UIButtonEx*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UIButtonEx*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UIBUTTONEX_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
