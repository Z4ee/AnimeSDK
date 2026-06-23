#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPYFIELDS_OFFSET UNITYSDK_OFFSET(0x1D3E09E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPY_1_OFFSET UNITYSDK_OFFSET(0x1D3E0620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPY_OFFSET UNITYSDK_OFFSET(0x1D3E0140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_INTERNALCOPY_1_OFFSET UNITYSDK_OFFSET(0x1D3E0760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_INTERNALCOPY_OFFSET UNITYSDK_OFFSET(0x1D3E0290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1D3E00A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_RECURSIVECOPYBASETYPEPRIVATEFIELDS_OFFSET UNITYSDK_OFFSET(0x1D3E0CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E0EE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ObjectExtensions_TypeDefinitionIndex = 26472;

	class ObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_CloneMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ObjectExtensions_TypeDefinitionIndex)->GetStaticField(0x212E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsPrimitive(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_ISPRIMITIVE_OFFSET))(type);
		}

		static ::System::Object* Copy(::System::Object* originalObject)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPY_OFFSET))(originalObject);
		}

		static ::System::Void Copy_1(::System::Object* originalObject, ::System::Object* targetObject)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPY_1_OFFSET))(originalObject, targetObject);
		}

		static ::System::Object* InternalCopy(::System::Object* originalObject, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>* visited)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_INTERNALCOPY_OFFSET))(originalObject, visited);
		}

		static ::System::Void InternalCopy_1(::System::Object* originalObject, ::System::Object* cloneObject, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>* visited)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_INTERNALCOPY_1_OFFSET))(originalObject, cloneObject, visited);
		}

		static ::System::Void RecursiveCopyBaseTypePrivateFields(::System::Object* originalObject, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>* visited, ::System::Object* cloneObject, ::System::Type* typeToReflect)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_RECURSIVECOPYBASETYPEPRIVATEFIELDS_OFFSET))(originalObject, visited, cloneObject, typeToReflect);
		}

		static ::System::Void CopyFields(::System::Object* originalObject, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>* visited, ::System::Object* cloneObject, ::System::Type* typeToReflect, ::System::Reflection::BindingFlags bindingFlags, ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>* filter)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>*, ::System::Object*, ::System::Type*, ::System::Reflection::BindingFlags, ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OBJECTEXTENSIONS_COPYFIELDS_OFFSET))(originalObject, visited, cloneObject, typeToReflect, bindingFlags, filter);
		}
	};
}
