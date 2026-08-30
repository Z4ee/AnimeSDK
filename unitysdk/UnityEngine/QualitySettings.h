#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ColorSpace.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }

#define UNITYENGINE_QUALITYSETTINGS_GETQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1ED477E0)
#define UNITYENGINE_QUALITYSETTINGS_GET_ACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1ED47800)
#define UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1ED47770)
#define UNITYENGINE_QUALITYSETTINGS_GET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x1ED47730)
#define UNITYENGINE_QUALITYSETTINGS_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x1ED477F0)
#define UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED47710)
#define UNITYENGINE_QUALITYSETTINGS_GET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x1ED477C0)
#define UNITYENGINE_QUALITYSETTINGS_GET_VSYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED47750)
#define UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1ED47780)
#define UNITYENGINE_QUALITYSETTINGS_SET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x1ED47740)
#define UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEDECREASETHRESH_OFFSET UNITYSDK_OFFSET(0x1ED477B0)
#define UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEEMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1ED477A0)
#define UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED47720)
#define UNITYENGINE_QUALITYSETTINGS_SET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0x1ED477D0)
#define UNITYENGINE_QUALITYSETTINGS_SET_USEPARTICLEDISTANCELOD_OFFSET UNITYSDK_OFFSET(0x1ED47790)
#define UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED47760)

namespace UnityEngine
{
	inline static constexpr unsigned int QualitySettings_TypeDefinitionIndex = 4132;

	class QualitySettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32 get_pixelLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_pixelLightCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_masterTextureLimit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_MASTERTEXTURELIMIT_OFFSET))();
		}

		static ::System::Void set_masterTextureLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_MASTERTEXTURELIMIT_OFFSET))(a1);
		}

		static ::System::Int32 get_vSyncCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_VSYNCCOUNT_OFFSET))();
		}

		static ::System::Void set_vSyncCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_antiAliasing()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET))();
		}

		static ::System::Void set_antiAliasing(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET))(a1);
		}

		static ::System::Void set_useParticleDistanceLOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_USEPARTICLEDISTANCELOD_OFFSET))(a1);
		}

		static ::System::Void set_particleEmitLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEEMITLEVEL_OFFSET))(a1);
		}

		static ::System::Void set_particleDecreaseThresh(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PARTICLEDECREASETHRESH_OFFSET))(a1);
		}

		static ::System::Single get_streamingMipmapsMemoryBudget()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET))();
		}

		static ::System::Void set_streamingMipmapsMemoryBudget(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_STREAMINGMIPMAPSMEMORYBUDGET_OFFSET))(a1);
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
