#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class StencilMaterial_MatEntry; }

#define UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET UNITYSDK_OFFSET(0x1A5AB070)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_2_OFFSET UNITYSDK_OFFSET(0x1A5AB0E0)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1A5AB060)
#define UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1A5ABB00)
#define UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A5AB910)
#define UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5ABC60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int StencilMaterial_TypeDefinitionIndex = 5740;

	class StencilMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x1BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, ::System::Int32 stencilID)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(baseMat, stencilID);
		}

		static ::UnityEngine::Material* Add_1(::UnityEngine::Material* baseMat, ::System::Int32 stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET))(baseMat, stencilID, operation, compareFunction, colorWriteMask);
		}

		static ::UnityEngine::Material* Add_2(::UnityEngine::Material* baseMat, ::System::Int32 stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, ::System::Int32 readMask, ::System::Int32 writeMask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_2_OFFSET))(baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask);
		}

		static ::System::Void Remove(::UnityEngine::Material* customMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET))(customMat);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET))();
		}
	};
}
