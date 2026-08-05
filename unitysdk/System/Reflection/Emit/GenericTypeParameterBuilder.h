#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x1CD48C30)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x1CD48C70)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1CD48CB0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1CD48D30)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CD48CF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CD48B90)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1CD48DB0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETEVENT_OFFSET UNITYSDK_OFFSET(0x1CD48D70)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1CD48E30)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1CD48DF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x1CD48EB0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x1CD48E70)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CD48EF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x1CD48F30)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x1CD48F70)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1CD48FF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1CD48FB0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CD49030)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x1CD49070)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1CD48960)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1CD48910)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1CD489B0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1CD48A00)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1CD48A50)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1CD48AA0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CD48B40)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CD48AF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x1CD48BF0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x1CD490B0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1CD490F0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1CD49130)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x1CD49170)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x1CD491B0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1CD491F0)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x1CD49230)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1CD49270)
#define SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD48BE0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int GenericTypeParameterBuilder_TypeDefinitionIndex = 615;

	class GenericTypeParameterBuilder : public ::System::Reflection::TypeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(this);
		}

		::System::Type* get_BaseType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_BASETYPE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_FULLNAME_OFFSET))(this);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_GUID_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_MODULE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Type* GetElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETELEMENTTYPE_OFFSET))(this);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes GetAttributeFlagsImpl()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCONSTRUCTORIMPL_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCONSTRUCTORS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETEVENT_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETEVENTS_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETFIELD_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETFIELDS_OFFSET))(this, bindingAttr);
		}

		::System::Type* GetInterface(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETINTERFACE_OFFSET))(this, name, ignoreCase);
		}

		::Il2CppArray<::System::Type*>* GetInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETINTERFACES_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMEMBERS_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMETHODIMPL_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETMETHODS_OFFSET))(this, bindingAttr);
		}

		::System::Type* GetNestedType(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETNESTEDTYPE_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETNESTEDTYPES_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETPROPERTIES_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_GETPROPERTYIMPL_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_HASELEMENTTYPEIMPL_OFFSET))(this);
		}

		::System::Object* InvokeMember(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_INVOKEMEMBER_OFFSET))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
		}

		::System::Boolean IsArrayImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISARRAYIMPL_OFFSET))(this);
		}

		::System::Boolean IsByRefImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISBYREFIMPL_OFFSET))(this);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISCOMOBJECTIMPL_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsPointerImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISPOINTERIMPL_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_GENERICTYPEPARAMETERBUILDER_ISPRIMITIVEIMPL_OFFSET))(this);
		}
	};
}
