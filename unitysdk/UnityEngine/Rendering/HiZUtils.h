#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2CDC20)
#define UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1B2CDC30)
#define UNITYENGINE_RENDERING_HIZUTILS_SETPARTIALREADBACK_OFFSET UNITYSDK_OFFSET(0x1B2CDC40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HiZUtils_TypeDefinitionIndex = 4789;

	class HiZUtils : public ::System::Object
	{
	public:
		static ::System::Boolean SetOCBufferCount(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERCOUNT_OFFSET))(a1);
		}

		static ::System::Void SetOCBufferSize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERSIZE_OFFSET))(a1, a2);
		}

		static ::System::Void SetPartialReadback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETPARTIALREADBACK_OFFSET))(a1);
		}
	};
}
