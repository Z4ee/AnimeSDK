#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/RuntimeConstructorInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_227461ECA347F719_OFFSET UNITYSDK_OFFSET(0x18B9C360)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_2FDFF3D6857D3618_OFFSET UNITYSDK_OFFSET(0x18B9BC10)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_3441E27C09535FD8_OFFSET UNITYSDK_OFFSET(0x18B9C380)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x18B9C350)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5D0E512F54D4D2E2_OFFSET UNITYSDK_OFFSET(0x18B9C1A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5DCD2917CBE6E984_OFFSET UNITYSDK_OFFSET(0x18B9BC00)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_62DDE419CEA20711_OFFSET UNITYSDK_OFFSET(0x18B9BAD0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_78810BEC4D9DFF5E_1_OFFSET UNITYSDK_OFFSET(0x18B9BB70)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_78810BEC4D9DFF5E_OFFSET UNITYSDK_OFFSET(0x18B9BB30)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18B9C6A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_9CFAC0AC05EF4427_OFFSET UNITYSDK_OFFSET(0x18B9BDF0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A0420FB436E33D57_OFFSET UNITYSDK_OFFSET(0x18B9C370)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x18B9BBB0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x18B9C610)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A886283F1E86B93E_OFFSET UNITYSDK_OFFSET(0x18B9C340)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x18B9C2D0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_ACDCC589F31A1218_OFFSET UNITYSDK_OFFSET(0x18B9C1D0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x18B9C2E0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_D1B9BEBF2C3B0C4E_OFFSET UNITYSDK_OFFSET(0x18B9C0A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x18B9C250)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_DAB8FA6A764B2239_OFFSET UNITYSDK_OFFSET(0x18B9BD90)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_DFD1CA50C1B9981F_OFFSET UNITYSDK_OFFSET(0x18B9C1F0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B9C690)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_F03C8C30B60ADB89_OFFSET UNITYSDK_OFFSET(0x18B9C1E0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoCMethod_TypeDefinitionIndex = 595;

	class MonoCMethod : public ::System::Reflection::RuntimeConstructorInfo
	{
	public:
		::System::IntPtr Field_5_0; // 0x10
		::System::String* Field_5_1; // 0x18
		::System::Type* Field_5_2; // 0x20

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes Method_5_62DDE419CEA20711()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_62DDE419CEA20711_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_5_78810BEC4D9DFF5E()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_78810BEC4D9DFF5E_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_5_78810BEC4D9DFF5E_1()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_78810BEC4D9DFF5E_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A0C1DAA6261B1CB5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A0C1DAA6261B1CB5_OFFSET))(this);
		}

		::System::Object* Method_5_5DCD2917CBE6E984(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters, ::System::Exception*& exc)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5DCD2917CBE6E984_OFFSET))(this, obj, parameters, exc);
		}

		::System::Object* Method_5_2FDFF3D6857D3618(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_2FDFF3D6857D3618_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Object* Method_5_9CFAC0AC05EF4427(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_9CFAC0AC05EF4427_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Object* Method_5_D1B9BEBF2C3B0C4E(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_D1B9BEBF2C3B0C4E_OFFSET))(this, obj, parameters);
		}

		::System::Object* Method_5_5D0E512F54D4D2E2(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5D0E512F54D4D2E2_OFFSET))(this, invokeAttr, binder, parameters, culture);
		}

		::System::RuntimeMethodHandle Method_5_ACDCC589F31A1218()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_ACDCC589F31A1218_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes Method_5_F03C8C30B60ADB89()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_F03C8C30B60ADB89_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_5_DFD1CA50C1B9981F()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_DFD1CA50C1B9981F_OFFSET))(this);
		}

		::System::Boolean Method_5_D2809205008ACF99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_D2809205008ACF99_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_DAB8FA6A764B2239()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_DAB8FA6A764B2239_OFFSET))(this);
		}

		::System::String* Method_5_CFDB2DF757369D2B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_CFDB2DF757369D2B_OFFSET))(this);
		}

		::System::Boolean Method_5_A886283F1E86B93E(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A886283F1E86B93E_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_227461ECA347F719(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_227461ECA347F719_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodBody* Method_5_A0420FB436E33D57()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A0420FB436E33D57_OFFSET))(this);
		}

		::System::String* Method_5_3441E27C09535FD8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_3441E27C09535FD8_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_5_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_A3C117624446E448_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
