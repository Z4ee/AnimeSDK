#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/XRGraphics_StereoRenderingMode.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B4B1E60)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1B4B1FD0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B4B2170)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1B4B1E30)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x1B4B2150)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_ISDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4B1EB0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_LOADEDDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1B4B1ED0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_RENDERVIEWPORTSCALE_OFFSET UNITYSDK_OFFSET(0x1B4B1E80)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_STEREORENDERINGMODE_OFFSET UNITYSDK_OFFSET(0x1B4B1FA0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1B4B1F20)
#define UNITYENGINE_RENDERING_XRGRAPHICS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1B4B1E70)
#define UNITYENGINE_RENDERING_XRGRAPHICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2190)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRGraphics_TypeDefinitionIndex = 18272;

	class XRGraphics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS__CTOR_OFFSET))(this);
		}

		static ::System::Single get_eyeTextureResolutionScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET))();
		}

		static ::System::Void set_eyeTextureResolutionScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET))(value);
		}

		static ::System::Single get_renderViewportScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_RENDERVIEWPORTSCALE_OFFSET))();
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_ENABLED_OFFSET))();
		}

		static ::System::Boolean get_isDeviceActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_ISDEVICEACTIVE_OFFSET))();
		}

		static ::System::String* get_loadedDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_LOADEDDEVICENAME_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* get_supportedDevices()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_SUPPORTEDDEVICES_OFFSET))();
		}

		static ::UnityEngine::Rendering::XRGraphics_StereoRenderingMode get_stereoRenderingMode()
		{
			return ((::UnityEngine::Rendering::XRGraphics_StereoRenderingMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_STEREORENDERINGMODE_OFFSET))();
		}

		static ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREDESC_OFFSET))();
		}

		static ::System::Int32 get_eyeTextureWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREWIDTH_OFFSET))();
		}

		static ::System::Int32 get_eyeTextureHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREHEIGHT_OFFSET))();
		}
	};
}
