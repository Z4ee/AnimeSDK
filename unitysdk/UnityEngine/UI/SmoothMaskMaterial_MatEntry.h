#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_MATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8C6A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_MatEntry_TypeDefinitionIndex = 6849;

	class SmoothMaskMaterial_MatEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMat; // 0x10
		::UnityEngine::Material* customMat; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* stencilMats; // 0x20
		::System::Int32 count; // 0x28
		::UnityEngine::UI::SmoothMask* mask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_MATENTRY__CTOR_OFFSET))(this);
		}
	};
}
