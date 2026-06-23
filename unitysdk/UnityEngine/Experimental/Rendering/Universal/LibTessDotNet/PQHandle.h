#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_PQHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C435FC0)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PQHandle_TypeDefinitionIndex = 26526;

	struct alignas(4) PQHandle
	{
		static ::System::Int32* StaticGet_Invalid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PQHandle_TypeDefinitionIndex)->GetStaticField(0x6A70);
		}
		::System::Int32 _handle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_PQHANDLE__CCTOR_OFFSET))();
		}
	};
}
