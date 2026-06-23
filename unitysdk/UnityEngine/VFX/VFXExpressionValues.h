#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_VFX_VFXEXPRESSIONVALUES_CREATEEXPRESSIONVALUESWRAPPER_OFFSET UNITYSDK_OFFSET(0x1E887960)
#define UNITYENGINE_VFX_VFXEXPRESSIONVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E887950)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXExpressionValues_TypeDefinitionIndex = 89812;

	class VFXExpressionValues : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONVALUES__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::VFX::VFXExpressionValues* CreateExpressionValuesWrapper(::System::IntPtr ptr)
		{
			return ((::UnityEngine::VFX::VFXExpressionValues*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONVALUES_CREATEEXPRESSIONVALUESWRAPPER_OFFSET))(ptr);
		}
	};
}
