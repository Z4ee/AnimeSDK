#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class ObjectCast; }

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___O_TypeDefinitionIndex = 50568;

	class ObjectCasters___O : public ::System::Object
	{
	public:
		static ::XLua::ObjectCast** StaticGet__7___longCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65E90);
		}
		static ::XLua::ObjectCast** StaticGet__10___floatCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65E98);
		}
		static ::XLua::ObjectCast** StaticGet__11___getBoolean()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EA0);
		}
		static ::XLua::ObjectCast** StaticGet__3___shortCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EA8);
		}
		static ::XLua::ObjectCast** StaticGet__6___uintCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EB0);
		}
		static ::XLua::ObjectCast** StaticGet__8___ulongCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EB8);
		}
		static ::XLua::ObjectCast** StaticGet__2___byteCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EC0);
		}
		static ::XLua::ObjectCast** StaticGet__5___intCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EC8);
		}
		static ::XLua::ObjectCast** StaticGet__12___getString()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65ED0);
		}
		static ::XLua::ObjectCast** StaticGet__1___sbyteCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65ED8);
		}
		static ::XLua::ObjectCast** StaticGet__0___charCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EE0);
		}
		static ::XLua::ObjectCast** StaticGet__4___ushortCaster()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EE8);
		}
		static ::XLua::ObjectCast** StaticGet__9___getDouble()
		{
			return (::XLua::ObjectCast**)Il2CppClass::FromTypeDefinitionIndex(ObjectCasters___O_TypeDefinitionIndex)->GetStaticField(0x65EF0);
		}
	};
}
