#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x168383B0)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x16838DA0)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET UNITYSDK_OFFSET(0x16838AE0)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETENABLED_OFFSET UNITYSDK_OFFSET(0x168393D0)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x16838820)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETMATERIAL_OFFSET UNITYSDK_OFFSET(0x16839120)
#define UNITYENGINE_UI_IMAGEEXTENSIONS_SETFILLAMOUNTCOMPAREPRE_OFFSET UNITYSDK_OFFSET(0x16838680)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ImageExtensions_TypeDefinitionIndex = 54710;

	class ImageExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetActive(::UnityEngine::UI::Image* image, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETACTIVE_OFFSET))(image, value, outputError);
		}

		static ::System::Void SetFillAmountComparePre(::UnityEngine::UI::Image* image, ::System::Single fillAmount)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SETFILLAMOUNTCOMPAREPRE_OFFSET))(image, fillAmount);
		}

		static ::System::Void SafeSetFillAmount(::UnityEngine::UI::Image* image, ::System::Single fillAmount, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETFILLAMOUNT_OFFSET))(image, fillAmount, outputError);
		}

		static ::System::Void SafeSetColor(::UnityEngine::UI::Image* image, ::UnityEngine::Color color, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET))(image, color, outputError);
		}

		static ::System::Void SafeSetColor_1(::UnityEngine::UI::Image* image, ::System::String* strColorHex, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETCOLOR_1_OFFSET))(image, strColorHex, outputError);
		}

		static ::System::Void SafeSetMaterial(::UnityEngine::UI::Image* image, ::UnityEngine::Material* material, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETMATERIAL_OFFSET))(image, material, outputError);
		}

		static ::System::Void SafeSetEnabled(::UnityEngine::UI::Image* image, ::System::Boolean enabled, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMAGEEXTENSIONS_SAFESETENABLED_OFFSET))(image, enabled, outputError);
		}
	};
}
