#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BeforeRenderHelper_OrderBlock.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF55930)
#define UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF55AE0)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_TypeDefinitionIndex = 5170;

	class BeforeRenderHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>** StaticGet_s_OrderBlocks()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>**)Il2CppClass::FromTypeDefinitionIndex(BeforeRenderHelper_TypeDefinitionIndex)->GetStaticField(0x5400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void Invoke()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET))();
		}
	};
}
