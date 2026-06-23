#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/XR/XRSettings_StereoRenderingMode.h"

namespace System { class String; }

#define UNITYENGINE_XR_XRSETTINGS_GET_DEVICEEYETEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0x1E881250)
#define UNITYENGINE_XR_XRSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E881180)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E881240)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x1E8811E0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E8811D0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1E8811A0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x1E8811C0)
#define UNITYENGINE_XR_XRSETTINGS_GET_ISDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E881190)
#define UNITYENGINE_XR_XRSETTINGS_GET_LOADEDDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1E881280)
#define UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E881270)
#define UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALE_OFFSET UNITYSDK_OFFSET(0x1E881260)
#define UNITYENGINE_XR_XRSETTINGS_GET_STEREORENDERINGMODE_OFFSET UNITYSDK_OFFSET(0x1E8812A0)
#define UNITYENGINE_XR_XRSETTINGS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1E881290)
#define UNITYENGINE_XR_XRSETTINGS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1E8811B0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRSettings_TypeDefinitionIndex = 8809;

	class XRSettings : public ::System::Object
	{
	public:
		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_ENABLED_OFFSET))();
		}

		static ::System::Boolean get_isDeviceActive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_ISDEVICEACTIVE_OFFSET))();
		}

		static ::System::Single get_eyeTextureResolutionScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET))();
		}

		static ::System::Void set_eyeTextureResolutionScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET))(value);
		}

		static ::System::Int32 get_eyeTextureWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREWIDTH_OFFSET))();
		}

		static ::System::Int32 get_eyeTextureHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREHEIGHT_OFFSET))();
		}

		static ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_OFFSET))();
		}

		static ::UnityEngine::Rendering::TextureDimension get_deviceEyeTextureDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_DEVICEEYETEXTUREDIMENSION_OFFSET))();
		}

		static ::System::Single get_renderViewportScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALE_OFFSET))();
		}

		static ::System::Single get_renderViewportScaleInternal()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALEINTERNAL_OFFSET))();
		}

		static ::System::String* get_loadedDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_LOADEDDEVICENAME_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* get_supportedDevices()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_SUPPORTEDDEVICES_OFFSET))();
		}

		static ::UnityEngine::XR::XRSettings_StereoRenderingMode get_stereoRenderingMode()
		{
			return ((::UnityEngine::XR::XRSettings_StereoRenderingMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_STEREORENDERINGMODE_OFFSET))();
		}

		static ::System::Void get_eyeTextureDesc_Injected(::UnityEngine::RenderTextureDescriptor& ret)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_INJECTED_OFFSET))(ret);
		}
	};
}
