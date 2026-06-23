#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObject.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Dynamic { class BindingRestrictions; }
namespace System::Dynamic { class DeleteMemberBinder; }
namespace System::Dynamic { class DynamicMetaObjectBinder; }
namespace System::Dynamic { class ExpandoClass; }
namespace System::Dynamic { class ExpandoObject; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class InvokeMemberBinder; }
namespace System::Dynamic { class SetMemberBinder; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_ADDDYNAMICTESTANDDEFER_OFFSET UNITYSDK_OFFSET(0x1E3216B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E322560)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1E3219B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDGETORINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E320AA0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E321A70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1E321BD0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETCLASSENSUREINDEX_OFFSET UNITYSDK_OFFSET(0x1E322390)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETLIMITEDSELF_OFFSET UNITYSDK_OFFSET(0x1E321590)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETRESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x1E322A90)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E321530)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E320A00)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_MetaExpando_TypeDefinitionIndex = 4998;

	class ExpandoObject_MetaExpando : public ::System::Dynamic::DynamicMetaObject
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::ExpandoObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Dynamic::ExpandoObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO__CTOR_OFFSET))(this, expression, value);
		}

		::System::Dynamic::DynamicMetaObject* BindGetOrInvokeMember(::System::Dynamic::DynamicMetaObjectBinder* binder, ::System::String* name, ::System::Boolean ignoreCase, ::System::Dynamic::DynamicMetaObject* fallback, ::System::Func_2<::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*>* fallbackInvoke)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObjectBinder*, ::System::String*, ::System::Boolean, ::System::Dynamic::DynamicMetaObject*, ::System::Func_2<::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDGETORINVOKEMEMBER_OFFSET))(this, binder, name, ignoreCase, fallback, fallbackInvoke);
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::GetMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDGETMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDINVOKEMEMBER_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDSETMEMBER_OFFSET))(this, binder, value);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DeleteMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_BINDDELETEMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* AddDynamicTestAndDefer(::System::Dynamic::DynamicMetaObjectBinder* binder, ::System::Dynamic::ExpandoClass* klass, ::System::Dynamic::ExpandoClass* originalClass, ::System::Dynamic::DynamicMetaObject* succeeds)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicMetaObjectBinder*, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_ADDDYNAMICTESTANDDEFER_OFFSET))(this, binder, klass, originalClass, succeeds);
		}

		::System::Dynamic::ExpandoClass* GetClassEnsureIndex(::System::String* name, ::System::Boolean caseInsensitive, ::System::Dynamic::ExpandoObject* obj, ::System::Dynamic::ExpandoClass*& klass, ::System::Int32& index)
		{
			return ((::System::Dynamic::ExpandoClass*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Dynamic::ExpandoObject*, ::System::Dynamic::ExpandoClass*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETCLASSENSUREINDEX_OFFSET))(this, name, caseInsensitive, obj, klass, index);
		}

		::System::Linq::Expressions::Expression* GetLimitedSelf()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETLIMITEDSELF_OFFSET))(this);
		}

		::System::Dynamic::BindingRestrictions* GetRestrictions()
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GETRESTRICTIONS_OFFSET))(this);
		}

		::System::Dynamic::ExpandoObject* get_Value()
		{
			return ((::System::Dynamic::ExpandoObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_METAEXPANDO_GET_VALUE_OFFSET))(this);
		}
	};
}
