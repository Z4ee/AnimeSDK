#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"

#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_DYNAMICTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1EB683D0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_ENABLEUIRECOMPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB683F0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1EB68350)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1EB68370)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1EB683B0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1EB68300)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1EB68330)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1EB68390)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET UNITYSDK_OFFSET(0x1EB68310)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET UNITYSDK_OFFSET(0x1EB68320)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1EB68480)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EB68490)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_DYNAMICTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1EB683E0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_ENABLEUIRECOMPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB68400)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1EB68360)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1EB68380)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1EB683C0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1EB68340)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1EB683A0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB68410)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSViewPort_TypeDefinitionIndex = 6145;

	class DLSSViewPort : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET))(this, width, height);
		}

		::System::UInt64 get_handle()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET))(this);
		}

		::UnityEngine::Rendering::DLSSQualityMode get_mode()
		{
			return ((::UnityEngine::Rendering::DLSSQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Rendering::DLSSQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DLSSGQualityMode get_frameGenMode()
		{
			return ((::UnityEngine::Rendering::DLSSGQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET))(this);
		}

		::System::Void set_frameGenMode(::UnityEngine::Rendering::DLSSGQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSGQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameGenNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET))(this);
		}

		::System::Void set_frameGenNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflexMode get_reflexMode()
		{
			return ((::UnityEngine::Rendering::ReflexMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET))(this);
		}

		::System::Void set_reflexMode(::UnityEngine::Rendering::ReflexMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflexMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameLimitUs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET))(this);
		}

		::System::Void set_frameLimitUs(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET))(this, value);
		}

		::System::Single get_dynamicTargetFrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_DYNAMICTARGETFRAMERATE_OFFSET))(this);
		}

		::System::Void set_dynamicTargetFrameRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_DYNAMICTARGETFRAMERATE_OFFSET))(this, value);
		}

		::System::Boolean get_enableUIRecomposition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_ENABLEUIRECOMPOSITION_OFFSET))(this);
		}

		::System::Void set_enableUIRecomposition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_ENABLEUIRECOMPOSITION_OFFSET))(this, value);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Rendering::DLSSViewPort* self, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::DLSSViewPort*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET))(self, width, height);
		}
	};
}
