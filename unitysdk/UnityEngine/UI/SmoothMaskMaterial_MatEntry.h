#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_MATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD2290)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_MatEntry_TypeDefinitionIndex = 8460;

	class SmoothMaskMaterial_MatEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMat; // 0x10
		::UnityEngine::Material* customMat; // 0x18
		::System::Int32 count; // 0x20
		::UnityEngine::UI::SmoothMask* mask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_MATENTRY__CTOR_OFFSET))(this);
		}
	};
}
