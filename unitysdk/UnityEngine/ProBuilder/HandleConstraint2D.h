#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB15C30)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB15C20)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSEMASK_OFFSET UNITYSDK_OFFSET(0x1EB15B60)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSE_OFFSET UNITYSDK_OFFSET(0x1EB15AD0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_MASK_OFFSET UNITYSDK_OFFSET(0x1EB15B30)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB15BA0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB15BE0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB15C90)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB15D50)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB15AC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HandleConstraint2D_TypeDefinitionIndex = 43168;

	class HandleConstraint2D : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::HandleConstraint2D** StaticGet_None()
		{
			return (::UnityEngine::ProBuilder::HandleConstraint2D**)Il2CppClass::FromTypeDefinitionIndex(HandleConstraint2D_TypeDefinitionIndex)->GetStaticField(0x5BE60);
		}
		::System::Int32 y; // 0x10
		::System::Int32 x; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CCTOR_OFFSET))();
		}

		::UnityEngine::ProBuilder::HandleConstraint2D* Inverse()
		{
			return ((::UnityEngine::ProBuilder::HandleConstraint2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSE_OFFSET))(this);
		}

		::UnityEngine::Vector2 Mask(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_MASK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 InverseMask(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSEMASK_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::HandleConstraint2D* a1, ::UnityEngine::ProBuilder::HandleConstraint2D* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::HandleConstraint2D*, ::UnityEngine::ProBuilder::HandleConstraint2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::HandleConstraint2D* a1, ::UnityEngine::ProBuilder::HandleConstraint2D* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::HandleConstraint2D*, ::UnityEngine::ProBuilder::HandleConstraint2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_TOSTRING_OFFSET))(this);
		}
	};
}
