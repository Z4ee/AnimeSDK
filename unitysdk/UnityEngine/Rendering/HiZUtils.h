#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x18A458A0)
#define UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x18A458B0)
#define UNITYENGINE_RENDERING_HIZUTILS_SETPARTIALREADBACK_OFFSET UNITYSDK_OFFSET(0x18A458C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HiZUtils_TypeDefinitionIndex = 4607;

	class HiZUtils : public ::System::Object
	{
	public:
		static ::System::Boolean SetOCBufferCount(::System::Int32 count)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERCOUNT_OFFSET))(count);
		}

		static ::System::Void SetOCBufferSize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETOCBUFFERSIZE_OFFSET))(width, height);
		}

		static ::System::Void SetPartialReadback(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HIZUTILS_SETPARTIALREADBACK_OFFSET))(enable);
		}
	};
}
