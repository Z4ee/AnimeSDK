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

#define UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF5CD90)
#define UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1DF5C920)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1DF5C730)
#define UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1DF5C710)
#define UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C770)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1DF5C6F0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1DF5C7F0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1DF5C7B0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C830)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1DF5C810)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1DF5C7D0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1DF5C860)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF5CDA0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1DF5C790)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1DF5C8A0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1DF5C880)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1DF5C840)
#define UNITYENGINE_SYSTEMINFO_GETMAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5CCB0)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1DF5C650)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1DF5C630)
#define UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET UNITYSDK_OFFSET(0x1DF5C6D0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF5C6B0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORFREQUENCYMHZ_OFFSET UNITYSDK_OFFSET(0x1DF5C690)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C670)
#define UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1DF5C910)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1DF5C720)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1DF5C700)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C760)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1DF5C6E0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1DF5C7E0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1DF5C7A0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C820)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1DF5C800)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1DF5C7C0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1DF5C850)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1DF5C780)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1DF5C890)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1DF5C870)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1DF581C0)
#define UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1DF5C8B0)
#define UNITYENGINE_SYSTEMINFO_GET_MAXTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5CCA0)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1DF5C640)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1DF5C620)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF5C6A0)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1DF5C680)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C660)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF5C990)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1DF5CD40)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1DF5CCC0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1DF5C930)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DF5C8F0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1DF5C950)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0x1DF5CCE0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGYROSCOPE_OFFSET UNITYSDK_OFFSET(0x1DF5C740)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1DF5C970)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1DF5CD60)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1DF5C9B0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1DF5CD20)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1DF5C8D0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1DF5CD00)
#define UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1DF5C6C0)
#define UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1DF5C9D0)
#define UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1DF5C8C0)
#define UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0x1DF5CB80)
#define UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1DF5CD80)
#define UNITYENGINE_SYSTEMINFO_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1DF5C750)
#define UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1DF5C9F0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF5C9A0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1DF5CD50)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1DF5CCD0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1DF5C940)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DF5C900)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1DF5C960)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET UNITYSDK_OFFSET(0x1DF5CCF0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1DF5C980)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1DF5CD70)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1DF5C9C0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1DF5CD30)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF5CA80)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1DF5C8E0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET UNITYSDK_OFFSET(0x1DF5CC90)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF5CB90)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1DF5CD10)
#define UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1DF5C9E0)
#define UNITYENGINE_SYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5CDB0)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 5399;

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
