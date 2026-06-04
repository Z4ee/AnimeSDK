#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BeforeRenderHelper_OrderBlock.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_BEFORERENDERHELPER_GETUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x1B27DB80)
#define UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B27B470)
#define UNITYENGINE_BEFORERENDERHELPER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B27A620)
#define UNITYENGINE_BEFORERENDERHELPER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B27AA00)
#define UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B27DC70)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_TypeDefinitionIndex = 4081;

	class BeforeRenderHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>** StaticGet_s_OrderBlocks()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>**)Il2CppClass::FromTypeDefinitionIndex(BeforeRenderHelper_TypeDefinitionIndex)->GetStaticField(0x2DF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetUpdateOrder(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_GETUPDATEORDER_OFFSET))(a1);
		}

		static ::System::Void RegisterCallback(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_REGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterCallback(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_UNREGISTERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void Invoke()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET))();
		}
	};
}
