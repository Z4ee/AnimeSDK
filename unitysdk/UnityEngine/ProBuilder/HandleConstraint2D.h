#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x18804650)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18804640)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSEMASK_OFFSET UNITYSDK_OFFSET(0x18804580)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSE_OFFSET UNITYSDK_OFFSET(0x188044F0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_MASK_OFFSET UNITYSDK_OFFSET(0x18804550)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x188045C0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18804600)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188046B0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x188047B0)
#define UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x188044E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HandleConstraint2D_TypeDefinitionIndex = 34096;

	class HandleConstraint2D : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::HandleConstraint2D** StaticGet_None()
		{
			return (::UnityEngine::ProBuilder::HandleConstraint2D**)Il2CppClass::FromTypeDefinitionIndex(HandleConstraint2D_TypeDefinitionIndex)->GetStaticField(0x27690);
		}
		::System::Int32 y; // 0x10
		::System::Int32 x; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D__CCTOR_OFFSET))();
		}

		::UnityEngine::ProBuilder::HandleConstraint2D* Inverse()
		{
			return ((::UnityEngine::ProBuilder::HandleConstraint2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSE_OFFSET))(this);
		}

		::UnityEngine::Vector2 Mask(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_MASK_OFFSET))(this, v);
		}

		::UnityEngine::Vector2 InverseMask(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_INVERSEMASK_OFFSET))(this, v);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::HandleConstraint2D*, ::UnityEngine::ProBuilder::HandleConstraint2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::HandleConstraint2D*, ::UnityEngine::ProBuilder::HandleConstraint2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_EQUALS_OFFSET))(this, o);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLECONSTRAINT2D_TOSTRING_OFFSET))(this);
		}
	};
}
