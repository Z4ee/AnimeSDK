#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SkyLutUtils_LinearGraidentColorKey.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1D7B54D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_FILLWITHWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1D7B5720)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_GENERATESKYLUT_OFFSET UNITYSDK_OFFSET(0x1D7B4560)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7B5830)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyLutUtils_TypeDefinitionIndex = 5980;

	class SkyLutUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Gradient*>** StaticGet_skyLutGradients()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Gradient*>**)Il2CppClass::FromTypeDefinitionIndex(SkyLutUtils_TypeDefinitionIndex)->GetStaticField(0x54D0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_skyLutGradientItemCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SkyLutUtils_TypeDefinitionIndex)->GetStaticField(0x54D8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_m_ComputeBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(SkyLutUtils_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::GradientColorKey>*>** StaticGet_skyLutGradientColorKeys()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::GradientColorKey>*>**)Il2CppClass::FromTypeDefinitionIndex(SkyLutUtils_TypeDefinitionIndex)->GetStaticField(0x54E8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>** StaticGet_m_GradientDatas()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>**)Il2CppClass::FromTypeDefinitionIndex(SkyLutUtils_TypeDefinitionIndex)->GetStaticField(0x54F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void AddKey(::UnityEngine::Gradient* gradient, ::Il2CppArray<::UnityEngine::GradientColorKey>*& colorKeys, ::System::Boolean hasAlpha)
		{
			return ((::System::Void(*)(::UnityEngine::Gradient*, ::Il2CppArray<::UnityEngine::GradientColorKey>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_ADDKEY_OFFSET))(gradient, colorKeys, hasAlpha);
		}

		static ::System::Void FillWithWeatherConfig(::System::Int32 baseCountOffset, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* iConfig, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Gradient*>* skyLutGradients)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Gradient*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_FILLWITHWEATHERCONFIG_OFFSET))(baseCountOffset, iConfig, skyLutGradients);
		}

		static ::System::Void GenerateSkyLut(::UnityEngine::Rendering::ScriptableRenderContext& ctx, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean m_SkyLutNeedChange, ::System::Boolean m_SkyLutIsReady, ::System::Boolean m_SkyAngleLutNeedChange, ::System::Boolean m_SkyAngleLutIsReady, ::System::Boolean m_IsDynamicTime, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_LeftW, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_RightW, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_WeatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTUTILS_GENERATESKYLUT_OFFSET))(ctx, cmd, m_SkyLutNeedChange, m_SkyLutIsReady, m_SkyAngleLutNeedChange, m_SkyAngleLutIsReady, m_IsDynamicTime, m_LeftW, m_RightW, m_WeatherConfig);
		}
	};
}
