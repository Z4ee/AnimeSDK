#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ColorSpace.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }

#define UNITYENGINE_QUALITYSETTINGS_GETQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1A468F40)
#define UNITYENGINE_QUALITYSETTINGS_GET_ACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1A468F60)
#define UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1A468ED0)
#define UNITYENGINE_QUALITYSETTINGS_GET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x1A468E90)
#define UNITYENGINE_QUALITYSETTINGS_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x1A468F50)
#define UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A468E70)
#define UNITYENGINE_QUALITYSETTINGS_GET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x1A468F20)
#define UNITYENGINE_QUALITYSETTINGS_GET_VSYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1A468EB0)
#define UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1A468EE0)
#define UNITYENGINE_QUALITYSETTINGS_SET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x1A468EA0)
#define UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEDECREASETHRESH_OFFSET UNITYSDK_OFFSET(0x1A468F10)
#define UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEEMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1A468F00)
#define UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A468E80)
#define UNITYENGINE_QUALITYSETTINGS_SET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x1A468F30)
#define UNITYENGINE_QUALITYSETTINGS_SET_USEPARTICLEDISTANCELOD_OFFSET UNITYSDK_OFFSET(0x1A468EF0)
#define UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1A468EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int QualitySettings_TypeDefinitionIndex = 3943;

	class QualitySettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32 get_pixelLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_pixelLightCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_masterTextureLimit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_MASTERTEXTURELIMIT_OFFSET))();
		}

		static ::System::Void set_masterTextureLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_MASTERTEXTURELIMIT_OFFSET))(value);
		}

		static ::System::Int32 get_vSyncCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_VSYNCCOUNT_OFFSET))();
		}

		static ::System::Void set_vSyncCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_antiAliasing()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET))();
		}

		static ::System::Void set_antiAliasing(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET))(value);
		}

		static ::System::Void set_useParticleDistanceLOD(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_USEPARTICLEDISTANCELOD_OFFSET))(value);
		}

		static ::System::Void set_particleEmitLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEEMITLEVEL_OFFSET))(value);
		}

		static ::System::Void set_particleDecreaseThresh(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEDECREASETHRESH_OFFSET))(value);
		}

		static ::System::Single get_streamingMipmapsMemoryBudget()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET))();
		}

		static ::System::Void set_streamingMipmapsMemoryBudget(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET))(value);
		}

		static ::System::Int32 GetQualityLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GETQUALITYLEVEL_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* get_names()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_NAMES_OFFSET))();
		}

		static ::UnityEngine::ColorSpace get_activeColorSpace()
		{
			return ((::UnityEngine::ColorSpace(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_ACTIVECOLORSPACE_OFFSET))();
		}
	};
}
