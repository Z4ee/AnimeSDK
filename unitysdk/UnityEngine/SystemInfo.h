#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeviceType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/OperatingSystemFamily.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/CopyTextureSupport.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class String; }
namespace System { struct Enum; }

#define UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1F34BF90)
#define UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1F34BB20)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1F34B930)
#define UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1F34B910)
#define UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1F34B970)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F34B8F0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1F34B9F0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1F34B9B0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1F34BA30)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1F34BA10)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1F34B9D0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1F34BA60)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1F34BFA0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1F34B990)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1F34BAA0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1F34BA80)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1F34BA40)
#define UNITYENGINE_SYSTEMINFO_GETMAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F34BEB0)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1F34B850)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1F34B830)
#define UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET UNITYSDK_OFFSET(0x1F34B8D0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1F34B8B0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORFREQUENCYMHZ_OFFSET UNITYSDK_OFFSET(0x1F34B890)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1F34B870)
#define UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1F34BB10)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1F34B920)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1F34B900)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1F34B960)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F34B8E0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1F34B9E0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1F34B9A0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1F34BA20)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1F34BA00)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1F34B9C0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1F34BA50)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1F34B980)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1F34BA90)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1F34BA70)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1F347400)
#define UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1F34BAB0)
#define UNITYENGINE_SYSTEMINFO_GET_MAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F34BEA0)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1F34B840)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1F34B820)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1F34B8A0)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F34B880)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1F34B860)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1F34BB90)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1F34BF40)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1F34BEC0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1F34BB30)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1F34BAF0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1F34BB50)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0x1F34BEE0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGYROSCOPE_OFFSET UNITYSDK_OFFSET(0x1F34B940)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1F34BB70)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1F34BF60)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1F34BBB0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1F34BF20)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1F34BAD0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1F34BF00)
#define UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1F34B8C0)
#define UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1F34BBD0)
#define UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1F34BAC0)
#define UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0x1F34BD80)
#define UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F34BF80)
#define UNITYENGINE_SYSTEMINFO_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1F34B950)
#define UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1F34BBF0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1F34BBA0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1F34BF50)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1F34BED0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1F34BB40)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1F34BB00)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1F34BB60)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET UNITYSDK_OFFSET(0x1F34BEF0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1F34BB80)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1F34BF70)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1F34BBC0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1F34BF30)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1F34BC80)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1F34BAE0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET UNITYSDK_OFFSET(0x1F34BE90)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1F34BD90)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1F34BF10)
#define UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1F34BBE0)
#define UNITYENGINE_SYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F34BFB0)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 5402;

	class SystemInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO__CTOR_OFFSET))(this);
		}

		static ::System::String* get_operatingSystem()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET))();
		}

		static ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily()
		{
			return ((::UnityEngine::OperatingSystemFamily(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET))();
		}

		static ::System::String* get_processorType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_PROCESSORTYPE_OFFSET))();
		}

		static ::System::Int32 get_processorFrequency()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_PROCESSORFREQUENCY_OFFSET))();
		}

		static ::System::Int32 get_processorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET))();
		}

		static ::System::Int32 get_systemMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET))();
		}

		static ::System::String* get_deviceUniqueIdentifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET))();
		}

		static ::System::String* get_deviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET))();
		}

		static ::System::String* get_deviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET))();
		}

		static ::System::Boolean get_supportsGyroscope()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGYROSCOPE_OFFSET))();
		}

		static ::UnityEngine::DeviceType get_deviceType()
		{
			return ((::UnityEngine::DeviceType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET))();
		}

		static ::System::Int32 get_graphicsMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET))();
		}

		static ::System::String* get_graphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::String* get_graphicsDeviceVendor()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET))();
		}

		static ::System::Int32 get_graphicsDeviceID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEID_OFFSET))();
		}

		static ::System::Int32 get_graphicsDeviceVendorID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDORID_OFFSET))();
		}

		static ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType()
		{
			return ((::UnityEngine::Rendering::GraphicsDeviceType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET))();
		}

		static ::System::Boolean get_graphicsUVStartsAtTop()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET))();
		}

		static ::System::String* get_graphicsDeviceVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET))();
		}

		static ::System::Int32 get_graphicsShaderLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET))();
		}

		static ::System::Boolean get_graphicsMultiThreaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET))();
		}

		static ::System::Boolean get_hasHiddenSurfaceRemovalOnGPU()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET))();
		}

		static ::System::Boolean get_supportsShadows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET))();
		}

		static ::System::Boolean get_supportsCubemapArrayTextures()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET))();
		}

		static ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport()
		{
			return ((::UnityEngine::Rendering::CopyTextureSupport(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET))();
		}

		static ::System::Boolean get_supportsComputeShaders()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET))();
		}

		static ::System::Boolean get_supportsGeometryShaders()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGEOMETRYSHADERS_OFFSET))();
		}

		static ::System::Boolean get_supportsInstancing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET))();
		}

		static ::System::Int32 get_supportedRenderTargetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET))();
		}

		static ::System::Boolean get_supportsMultisampleAutoResolve()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET))();
		}

		static ::System::Boolean get_usesReversedZBuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET))();
		}

		static ::System::Boolean IsValidEnumValue(::System::Enum* value)
		{
			return ((::System::Boolean(*)(::System::Enum*))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET))(value);
		}

		static ::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Boolean SupportsTextureFormat(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET))(format);
		}

		static ::System::Int32 get_maxTextureSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_MAXTEXTURESIZE_OFFSET))();
		}

		static ::System::Boolean get_supportsAsyncCompute()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSASYNCCOMPUTE_OFFSET))();
		}

		static ::System::Boolean get_supportsGraphicsFence()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET))();
		}

		static ::System::Boolean get_supportsTopOfPipeSynchronization()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET))();
		}

		static ::System::Boolean get_supportsRayTracing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRAYTRACING_OFFSET))();
		}

		static ::System::Boolean get_supportPerDrawCallVRS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTPERDRAWCALLVRS_OFFSET))();
		}

		static ::System::Boolean get_supportsMipStreaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMIPSTREAMING_OFFSET))();
		}

		static ::System::String* GetOperatingSystem()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET))();
		}

		static ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily()
		{
			return ((::UnityEngine::OperatingSystemFamily(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET))();
		}

		static ::System::String* GetProcessorType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPROCESSORTYPE_OFFSET))();
		}

		static ::System::Int32 GetProcessorFrequencyMHz()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPROCESSORFREQUENCYMHZ_OFFSET))();
		}

		static ::System::Int32 GetProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET))();
		}

		static ::System::Int32 GetPhysicalMemoryMB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET))();
		}

		static ::System::String* GetDeviceUniqueIdentifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET))();
		}

		static ::System::String* GetDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET))();
		}

		static ::System::String* GetDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET))();
		}

		static ::System::Boolean IsGyroAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_ISGYROAVAILABLE_OFFSET))();
		}

		static ::UnityEngine::DeviceType GetDeviceType()
		{
			return ((::UnityEngine::DeviceType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET))();
		}

		static ::System::Int32 GetGraphicsMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVendor()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET))();
		}

		static ::System::Int32 GetGraphicsDeviceID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEID_OFFSET))();
		}

		static ::System::Int32 GetGraphicsDeviceVendorID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDORID_OFFSET))();
		}

		static ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType()
		{
			return ((::UnityEngine::Rendering::GraphicsDeviceType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET))();
		}

		static ::System::Boolean GetGraphicsUVStartsAtTop()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET))();
		}

		static ::System::Int32 GetGraphicsShaderLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET))();
		}

		static ::System::Boolean GetGraphicsMultiThreaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET))();
		}

		static ::System::Boolean HasHiddenSurfaceRemovalOnGPU()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET))();
		}

		static ::System::Boolean SupportsShadows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET))();
		}

		static ::System::Boolean SupportsCubemapArrayTextures()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET))();
		}

		static ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport()
		{
			return ((::UnityEngine::Rendering::CopyTextureSupport(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET))();
		}

		static ::System::Boolean SupportsComputeShaders()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET))();
		}

		static ::System::Boolean SupportsGeometryShaders()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSGEOMETRYSHADERS_OFFSET))();
		}

		static ::System::Boolean SupportsInstancing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET))();
		}

		static ::System::Int32 SupportedRenderTargetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET))();
		}

		static ::System::Boolean SupportsMultisampleAutoResolve()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET))();
		}

		static ::System::Boolean UsesReversedZBuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET))();
		}

		static ::System::Boolean HasRenderTextureNative(::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET))(format);
		}

		static ::System::Boolean SupportsTextureFormatNative(::UnityEngine::TextureFormat format)
		{
			return ((::System::Boolean(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET))(format);
		}

		static ::System::Int32 GetMaxTextureSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETMAXTEXTURESIZE_OFFSET))();
		}

		static ::System::Boolean SupportsAsyncCompute()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSASYNCCOMPUTE_OFFSET))();
		}

		static ::System::Boolean SupportsGPUFence()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET))();
		}

		static ::System::Boolean SupportsTopOfPipeSynchronization()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET))();
		}

		static ::System::Boolean SupportsRayTracing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSRAYTRACING_OFFSET))();
		}

		static ::System::Boolean SupportPerDrawCallVRS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTPERDRAWCALLVRS_OFFSET))();
		}

		static ::System::Boolean SupportsMipStreaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_SUPPORTSMIPSTREAMING_OFFSET))();
		}

		static ::System::Boolean IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET))(format, usage);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET))(format, usage);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Experimental::Rendering::DefaultFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET))(format);
		}
	};
}
