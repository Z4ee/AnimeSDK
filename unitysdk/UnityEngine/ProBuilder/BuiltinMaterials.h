#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xC044B60)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET UNITYSDK_OFFSET(0xC0452B0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC045110)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xC044E60)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC044FE0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC044F20)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET UNITYSDK_OFFSET(0xC044E00)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0xC0451E0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET UNITYSDK_OFFSET(0xC044EC0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET UNITYSDK_OFFSET(0xC045620)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC045040)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0xC0455C0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xC044F80)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET UNITYSDK_OFFSET(0xC0442C0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC045680)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BuiltinMaterials_TypeDefinitionIndex = 41537;

	class BuiltinMaterials : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_VertexPickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC20);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC28);
		}
		static ::UnityEngine::Shader** StaticGet_s_SelectionPickerShader()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC30);
		}
		static ::UnityEngine::Material** StaticGet_s_UnlitVertexColorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC38);
		}
		static ::UnityEngine::Material** StaticGet_s_EdgePickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC40);
		}
		static ::System::String** StaticGet_k_VertexPickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC48);
		}
		static ::UnityEngine::Material** StaticGet_s_ShapePreviewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC50);
		}
		static ::System::String** StaticGet_k_EdgePickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC58);
		}
		static ::System::String** StaticGet_k_EdgePickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC60);
		}
		static ::System::String** StaticGet_k_VertexPickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC68);
		}
		static ::UnityEngine::Material** StaticGet_s_UnityDefaultDiffuse()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC70);
		}
		static ::System::String** StaticGet_k_FacePickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC78);
		}
		static ::System::String** StaticGet_k_FacePickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC80);
		}
		static ::UnityEngine::Material** StaticGet_s_FacePickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x4EC88);
		}
		static ::System::Boolean* StaticGet_s_GeometryShadersSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xE1C0);
		}
		static ::System::Boolean* StaticGet_s_IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xE1C1);
		}
		static ::UnityEngine::Color* StaticGet_previewColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xE1C4);
		}
		// static const ::System::String* faceShader; // 0x0
		// static const ::System::String* lineShader; // 0x0
		// static const ::System::String* lineShaderMetal; // 0x0
		// static const ::System::String* pointShader; // 0x0
		// static const ::System::String* wireShader; // 0x0
		// static const ::System::String* dotShader; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET))();
		}

		static ::System::Boolean get_geometryShadersSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Shader* get_selectionPickerShader()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET))();
		}

		static ::UnityEngine::Material* get_facePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_vertexPickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_edgePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_triggerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_colliderMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_noDrawMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetLegacyDiffuse()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET))();
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_unlitVertexColor()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_ShapePreviewMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET))();
		}
	};
}
