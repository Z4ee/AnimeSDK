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

#define UNITYENGINE_SYSTEMINFO_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1BC22680)
#define UNITYENGINE_SYSTEMINFO_GETCOPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1BC22230)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1BC22040)
#define UNITYENGINE_SYSTEMINFO_GETDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1BC22020)
#define UNITYENGINE_SYSTEMINFO_GETDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1BC22080)
#define UNITYENGINE_SYSTEMINFO_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1BC22000)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1BC22100)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1BC220C0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1BC22140)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1BC22120)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1BC220E0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1BC22170)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x1BC22690)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BC220A0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1BC221B0)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC22190)
#define UNITYENGINE_SYSTEMINFO_GETGRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1BC22150)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1BC21F60)
#define UNITYENGINE_SYSTEMINFO_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1BC21F40)
#define UNITYENGINE_SYSTEMINFO_GETPHYSICALMEMORYMB_OFFSET UNITYSDK_OFFSET(0x1BC21FE0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC21FC0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORFREQUENCYMHZ_OFFSET UNITYSDK_OFFSET(0x1BC21FA0)
#define UNITYENGINE_SYSTEMINFO_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1BC21F80)
#define UNITYENGINE_SYSTEMINFO_GET_COPYTEXTURESUPPORT_OFFSET UNITYSDK_OFFSET(0x1BC22220)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1BC22030)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1BC22010)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1BC22070)
#define UNITYENGINE_SYSTEMINFO_GET_DEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1BC21FF0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1BC220F0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1BC220B0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1BC22130)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDORID_OFFSET UNITYSDK_OFFSET(0x1BC22110)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1BC220D0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1BC22160)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BC22090)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSMULTITHREADED_OFFSET UNITYSDK_OFFSET(0x1BC221A0)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC22180)
#define UNITYENGINE_SYSTEMINFO_GET_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1BC1DB50)
#define UNITYENGINE_SYSTEMINFO_GET_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1BC221C0)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x1BC21F50)
#define UNITYENGINE_SYSTEMINFO_GET_OPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1BC21F30)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC21FB0)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1BC21F90)
#define UNITYENGINE_SYSTEMINFO_GET_PROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1BC21F70)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC222A0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1BC22630)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1BC225B0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1BC22240)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1BC22200)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1BC22260)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0x1BC225D0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSGYROSCOPE_OFFSET UNITYSDK_OFFSET(0x1BC22050)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1BC22280)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1BC22650)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1BC222C0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1BC22610)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1BC221E0)
#define UNITYENGINE_SYSTEMINFO_GET_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1BC225F0)
#define UNITYENGINE_SYSTEMINFO_GET_SYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BC21FD0)
#define UNITYENGINE_SYSTEMINFO_GET_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC222E0)
#define UNITYENGINE_SYSTEMINFO_HASHIDDENSURFACEREMOVALONGPU_OFFSET UNITYSDK_OFFSET(0x1BC221D0)
#define UNITYENGINE_SYSTEMINFO_HASRENDERTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0x1BC22490)
#define UNITYENGINE_SYSTEMINFO_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BC22670)
#define UNITYENGINE_SYSTEMINFO_ISGYROAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1BC22060)
#define UNITYENGINE_SYSTEMINFO_ISVALIDENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1BC22300)
#define UNITYENGINE_SYSTEMINFO_SUPPORTEDRENDERTARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC222B0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTPERDRAWCALLVRS_OFFSET UNITYSDK_OFFSET(0x1BC22640)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1BC225C0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1BC22250)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSCUBEMAPARRAYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1BC22210)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1BC22270)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSGPUFENCE_OFFSET UNITYSDK_OFFSET(0x1BC225E0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSINSTANCING_OFFSET UNITYSDK_OFFSET(0x1BC22290)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMIPSTREAMING_OFFSET UNITYSDK_OFFSET(0x1BC22660)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSMULTISAMPLEAUTORESOLVE_OFFSET UNITYSDK_OFFSET(0x1BC222D0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRAYTRACING_OFFSET UNITYSDK_OFFSET(0x1BC22620)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1BC22390)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSSHADOWS_OFFSET UNITYSDK_OFFSET(0x1BC221F0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMATNATIVE_OFFSET UNITYSDK_OFFSET(0x1BC225A0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1BC224A0)
#define UNITYENGINE_SYSTEMINFO_SUPPORTSTOPOFPIPESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1BC22600)
#define UNITYENGINE_SYSTEMINFO_USESREVERSEDZBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC222F0)
#define UNITYENGINE_SYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC226A0)

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
