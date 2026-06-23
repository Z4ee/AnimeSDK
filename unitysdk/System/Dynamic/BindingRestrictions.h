#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETINSTANCERESTRICTION_OFFSET UNITYSDK_OFFSET(0x1E3048B0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_1_OFFSET UNITYSDK_OFFSET(0x1E3045B0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET UNITYSDK_OFFSET(0x1E304470)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGE_OFFSET UNITYSDK_OFFSET(0x1E3042D0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E3049B0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3049C0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3042C0)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_TypeDefinitionIndex = 4966;

	class BindingRestrictions : public ::System::Object
	{
	public:
		static ::System::Dynamic::BindingRestrictions** StaticGet_Empty()
		{
			return (::System::Dynamic::BindingRestrictions**)Il2CppClass::FromTypeDefinitionIndex(BindingRestrictions_TypeDefinitionIndex)->GetStaticField(0x3F30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS__CCTOR_OFFSET))();
		}

		::System::Dynamic::BindingRestrictions* Merge(::System::Dynamic::BindingRestrictions* restrictions)
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::PVOID, ::System::Dynamic::BindingRestrictions*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGE_OFFSET))(this, restrictions);
		}

		static ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Linq::Expressions::Expression* expression, ::System::Type* type)
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET))(expression, type);
		}

		static ::System::Dynamic::BindingRestrictions* GetTypeRestriction_1(::System::Dynamic::DynamicMetaObject* obj)
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_1_OFFSET))(obj);
		}

		static ::System::Dynamic::BindingRestrictions* GetInstanceRestriction(::System::Linq::Expressions::Expression* expression, ::System::Object* instance)
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::System::Linq::Expressions::Expression*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETINSTANCERESTRICTION_OFFSET))(expression, instance);
		}

		::System::Linq::Expressions::Expression* ToExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TOEXPRESSION_OFFSET))(this);
		}
	};
}
