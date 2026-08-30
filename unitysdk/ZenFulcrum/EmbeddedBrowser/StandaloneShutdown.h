#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7F1BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D7F1C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F1D50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneShutdown_TypeDefinitionIndex = 38265;

	class StandaloneShutdown : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OnShutDown()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StandaloneShutdown_TypeDefinitionIndex)->GetStaticField(0x46210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CREATE_OFFSET))();
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_ONAPPLICATIONQUIT_OFFSET))(this);
		}
	};
}
