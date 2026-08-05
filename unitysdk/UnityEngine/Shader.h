#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/DisableBatchingType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Rendering/ShaderHardwareTier.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyFlags.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader_OnShaderCompile; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Experimental::Rendering { class RayTracingAccelerationStructure; }

#define UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0x1E491420)
#define UNITYENGINE_SHADER_CLEANUPPSO_OFFSET UNITYSDK_OFFSET(0x1E48FD80)
#define UNITYENGINE_SHADER_DEBUGSRPCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1E48FD90)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E48FCB0)
#define UNITYENGINE_SHADER_DUMPSHADERVARIANTS_OFFSET UNITYSDK_OFFSET(0x1E48FD70)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E48FCA0)
#define UNITYENGINE_SHADER_ENABLEPUSHSHADERCOMPILEINFOTOSERVER_OFFSET UNITYSDK_OFFSET(0x1E4900F0)
#define UNITYENGINE_SHADER_ENABLESRPCOMPATIBILITYERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E4900E0)
#define UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490070)
#define UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1E4903D0)
#define UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490090)
#define UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1E490650)
#define UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490080)
#define UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1E490510)
#define UNITYENGINE_SHADER_FINDBUILTIN_OFFSET UNITYSDK_OFFSET(0x1E48FC20)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1E48FDD0)
#define UNITYENGINE_SHADER_FINDPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0x1E4914B0)
#define UNITYENGINE_SHADER_FIND_OFFSET UNITYSDK_OFFSET(0x1E48FC10)
#define UNITYENGINE_SHADER_GETAUTOHIBERNATION_OFFSET UNITYSDK_OFFSET(0x1E48FD50)
#define UNITYENGINE_SHADER_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x1E48FDA0)
#define UNITYENGINE_SHADER_GETGLOBALCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E491020)
#define UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1E490FE0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1E490040)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490010)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E491180)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E491270)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E491290)
#define UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1E491150)
#define UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FF10)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1E490F20)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1E490F00)
#define UNITYENGINE_SHADER_GETGLOBALINT_1_OFFSET UNITYSDK_OFFSET(0x1E490F50)
#define UNITYENGINE_SHADER_GETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1E490F30)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1E490060)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490030)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E491240)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E4912D0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E4912F0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1E491210)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48FFC0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FF60)
#define UNITYENGINE_SHADER_GETGLOBALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1E4910C0)
#define UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1E491050)
#define UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FFD0)
#define UNITYENGINE_SHADER_GETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1E491140)
#define UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E491120)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1E490050)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490020)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E4911E0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E4912A0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E4912C0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1E4911B0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48FF50)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FF20)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1E490FB0)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1E490F70)
#define UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1E491790)
#define UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E4913A0)
#define UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4914A0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1E491820)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E4913F0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1E4913B0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVECTORVALUE_OFFSET UNITYSDK_OFFSET(0x1E4919E0)
#define UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_1_OFFSET UNITYSDK_OFFSET(0x1E491670)
#define UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E491380)
#define UNITYENGINE_SHADER_GETPROPERTYFLAGS_1_OFFSET UNITYSDK_OFFSET(0x1E491700)
#define UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0x1E491390)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET UNITYSDK_OFFSET(0x1E491550)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0x1E491360)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1E4914C0)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E491350)
#define UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET UNITYSDK_OFFSET(0x1E491B70)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_1_OFFSET UNITYSDK_OFFSET(0x1E491E90)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET UNITYSDK_OFFSET(0x1E491410)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET UNITYSDK_OFFSET(0x1E491D20)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0x1E491400)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1E4915E0)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1E491370)
#define UNITYENGINE_SHADER_GET_DISABLEBATCHING_OFFSET UNITYSDK_OFFSET(0x1E48FCE0)
#define UNITYENGINE_SHADER_GET_GLOBALMAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0x1E48FC50)
#define UNITYENGINE_SHADER_GET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1E48FC80)
#define UNITYENGINE_SHADER_GET_GLOBALSHADERHARDWARETIER_OFFSET UNITYSDK_OFFSET(0x1E48FB50)
#define UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E48FC70)
#define UNITYENGINE_SHADER_GET_MAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0x1E48FC30)
#define UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1E48FDC0)
#define UNITYENGINE_SHADER_GET_RENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1E48FCD0)
#define UNITYENGINE_SHADER_GET_SUPPORTASYNCCREATE_OFFSET UNITYSDK_OFFSET(0x1E4900C0)
#define UNITYENGINE_SHADER_HIBERNATEALLSHADERS_OFFSET UNITYSDK_OFFSET(0x1E48FD40)
#define UNITYENGINE_SHADER_IDTOPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E48FD20)
#define UNITYENGINE_SHADER_IDTOTAG_OFFSET UNITYSDK_OFFSET(0x1E48FD10)
#define UNITYENGINE_SHADER_INTERNAL_CALLONSHADERCOMPILE_OFFSET UNITYSDK_OFFSET(0x1E4900A0)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1E48FE60)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1E48FCC0)
#define UNITYENGINE_SHADER_KEYWORDTOID_OFFSET UNITYSDK_OFFSET(0x1E48FD30)
#define UNITYENGINE_SHADER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x1E48CC20)
#define UNITYENGINE_SHADER_SETAUTOHIBERNATION_OFFSET UNITYSDK_OFFSET(0x1E48FD60)
#define UNITYENGINE_SHADER_SETFORCESRPCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1E48FDB0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FEE0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1E4909F0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4909C0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E490890)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1E490860)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FEF0)
#define UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1E490A00)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FFE0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E490A50)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E490AF0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E490B90)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_4_OFFSET UNITYSDK_OFFSET(0x1E490BC0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1E490100)
#define UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FE70)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1E4907C0)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1E490790)
#define UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET UNITYSDK_OFFSET(0x1E490800)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1E4907D0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E490000)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E490D70)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E490E10)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E490EB0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_4_OFFSET UNITYSDK_OFFSET(0x1E490EE0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1E4902E0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48FEB0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FEA0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1E490900)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1E4908B0)
#define UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FF00)
#define UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTURE_1_OFFSET UNITYSDK_OFFSET(0x1E490A40)
#define UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E490A10)
#define UNITYENGINE_SHADER_SETGLOBALRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FED0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FEC0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1E490970)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1E490980)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1E4909B0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E490940)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FFF0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E490BE0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x1E490C80)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x1E490D20)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_4_OFFSET UNITYSDK_OFFSET(0x1E490D50)
#define UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1E4901F0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E48FE90)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1E48FE80)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1E490840)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1E490810)
#define UNITYENGINE_SHADER_SET_GLOBALMAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0x1E48FC60)
#define UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1E48FC90)
#define UNITYENGINE_SHADER_SET_GLOBALSHADERHARDWARETIER_OFFSET UNITYSDK_OFFSET(0x1E48FBB0)
#define UNITYENGINE_SHADER_SET_MAXIMUMLOD_OFFSET UNITYSDK_OFFSET(0x1E48FC40)
#define UNITYENGINE_SHADER_SET_SUPPORTASYNCCREATE_OFFSET UNITYSDK_OFFSET(0x1E4900D0)
#define UNITYENGINE_SHADER_TAGTOID_OFFSET UNITYSDK_OFFSET(0x1E48FD00)
#define UNITYENGINE_SHADER_WARMUPALLSHADERS_OFFSET UNITYSDK_OFFSET(0x1E48FCF0)
#define UNITYENGINE_SHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E491300)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_TypeDefinitionIndex = 5200;

	class Shader : public ::UnityEngine::Object
	{
	public:
		static ::UnityEngine::Shader_OnShaderCompile** StaticGet_onShaderCompile()
		{
			return (::UnityEngine::Shader_OnShaderCompile**)Il2CppClass::FromTypeDefinitionIndex(Shader_TypeDefinitionIndex)->GetStaticField(0x51A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier()
		{
			return ((::UnityEngine::Rendering::ShaderHardwareTier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALSHADERHARDWARETIER_OFFSET))();
		}

		static ::System::Void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderHardwareTier))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALSHADERHARDWARETIER_OFFSET))(value);
		}

		static ::UnityEngine::Shader* Find(::System::String* name)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FIND_OFFSET))(name);
		}

		static ::UnityEngine::Shader* FindBuiltin(::System::String* name)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDBUILTIN_OFFSET))(name);
		}

		::System::Int32 get_maximumLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_MAXIMUMLOD_OFFSET))(this);
		}

		::System::Void set_maximumLOD(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_MAXIMUMLOD_OFFSET))(this, value);
		}

		static ::System::Int32 get_globalMaximumLOD()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALMAXIMUMLOD_OFFSET))();
		}

		static ::System::Void set_globalMaximumLOD(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALMAXIMUMLOD_OFFSET))(value);
		}

		::System::Boolean get_isSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET))(this);
		}

		static ::System::String* get_globalRenderPipeline()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_GLOBALRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_globalRenderPipeline(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET))(value);
		}

		static ::System::Void EnableKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(keyword);
		}

		static ::System::Void DisableKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(keyword);
		}

		static ::System::Boolean IsKeywordEnabled(::System::String* keyword)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(keyword);
		}

		::System::Int32 get_renderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_RENDERQUEUE_OFFSET))(this);
		}

		::UnityEngine::DisableBatchingType get_disableBatching()
		{
			return ((::UnityEngine::DisableBatchingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_DISABLEBATCHING_OFFSET))(this);
		}

		static ::System::Void WarmupAllShaders()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_WARMUPALLSHADERS_OFFSET))();
		}

		static ::System::Int32 TagToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_TAGTOID_OFFSET))(name);
		}

		static ::System::String* IDToTag(::System::Int32 name)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOTAG_OFFSET))(name);
		}

		static ::System::Int32 PropertyToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_PROPERTYTOID_OFFSET))(name);
		}

		static ::System::String* IDToProperty(::System::Int32 nameID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOPROPERTY_OFFSET))(nameID);
		}

		static ::System::Int32 KeywordToID(::System::String* keyword)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_KEYWORDTOID_OFFSET))(keyword);
		}

		static ::System::Void HibernateAllShaders(::System::String* args)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_HIBERNATEALLSHADERS_OFFSET))(args);
		}

		static ::System::Boolean GetAutoHibernation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETAUTOHIBERNATION_OFFSET))();
		}

		static ::System::Void SetAutoHibernation(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETAUTOHIBERNATION_OFFSET))(enable);
		}

		static ::System::Void DumpShaderVariants(::System::String* args)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DUMPSHADERVARIANTS_OFFSET))(args);
		}

		::System::Int32 CleanupPSO(::Il2CppArray<::System::String*>* keywords, ::System::String* passName)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CLEANUPPSO_OFFSET))(this, keywords, passName);
		}

		::System::String* DebugSRPCompatibility()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DEBUGSRPCOMPATIBILITY_OFFSET))(this);
		}

		::UnityEngine::Shader* GetDependency(::System::String* name)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETDEPENDENCY_OFFSET))(this, name);
		}

		::System::Void SetForceSRPCompatibility(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETFORCESRPCOMPATIBILITY_OFFSET))(this, force);
		}

		::System::Int32 get_passCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShaderTagId FindPassTagValue(::System::Int32 passIndex, ::UnityEngine::Rendering::ShaderTagId tagName)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(this, passIndex, tagName);
		}

		::System::Int32 Internal_FindPassTagValue(::System::Int32 passIndex, ::System::Int32 tagName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET))(this, passIndex, tagName);
		}

		static ::System::Void SetGlobalFloatImpl(::System::Int32 name, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalVectorImpl(::System::Int32 name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrixImpl(::System::Int32 name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalTextureImpl(::System::Int32 name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalRenderTextureImpl(::System::Int32 name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALRENDERTEXTUREIMPL_OFFSET))(name, value, element);
		}

		static ::System::Void SetGlobalBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalConstantBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFERIMPL_OFFSET))(name, value, offset, size);
		}

		static ::System::Void SetGlobalRayTracingAccelerationStructureImpl(::System::Int32 v, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTUREIMPL_OFFSET))(v, value);
		}

		static ::System::Single GetGlobalFloatImpl(::System::Int32 name)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET))(name);
		}

		static ::UnityEngine::Vector4 GetGlobalVectorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET))(name);
		}

		static ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_OFFSET))(name);
		}

		static ::UnityEngine::Texture* GetGlobalTextureImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Texture*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET))(name);
		}

		static ::System::Void SetGlobalFloatArrayImpl(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAYIMPL_OFFSET))(name, values, count);
		}

		static ::System::Void SetGlobalVectorArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAYIMPL_OFFSET))(name, values, count);
		}

		static ::System::Void SetGlobalMatrixArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAYIMPL_OFFSET))(name, values, count);
		}

		static ::Il2CppArray<::System::Single>* GetGlobalFloatArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAYIMPL_OFFSET))(name);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>* GetGlobalVectorArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAYIMPL_OFFSET))(name);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>* GetGlobalMatrixArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYIMPL_OFFSET))(name);
		}

		static ::System::Int32 GetGlobalFloatArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAYCOUNTIMPL_OFFSET))(name);
		}

		static ::System::Int32 GetGlobalVectorArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAYCOUNTIMPL_OFFSET))(name);
		}

		static ::System::Int32 GetGlobalMatrixArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAYCOUNTIMPL_OFFSET))(name);
		}

		static ::System::Void ExtractGlobalFloatArrayImpl(::System::Int32 name, ::Il2CppArray<::System::Single>* val)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAYIMPL_OFFSET))(name, val);
		}

		static ::System::Void ExtractGlobalVectorArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* val)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAYIMPL_OFFSET))(name, val);
		}

		static ::System::Void ExtractGlobalMatrixArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* val)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAYIMPL_OFFSET))(name, val);
		}

		static ::System::Void Internal_CallOnShaderCompile(::System::String* shaderCompileInfos)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_CALLONSHADERCOMPILE_OFFSET))(shaderCompileInfos);
		}

		::System::Boolean get_supportAsyncCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_SUPPORTASYNCCREATE_OFFSET))(this);
		}

		::System::Void set_supportAsyncCreate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_SUPPORTASYNCCREATE_OFFSET))(this, value);
		}

		static ::System::Void EnableSRPCompatibilityErrorMessage(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLESRPCOMPATIBILITYERRORMESSAGE_OFFSET))(enable);
		}

		static ::System::Void EnablePushShaderCompileInfoToServer(::System::Boolean b)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEPUSHSHADERCOMPILEINFOTOSERVER_OFFSET))(b);
		}

		static ::System::Void SetGlobalFloatArray(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_OFFSET))(name, values, count);
		}

		static ::System::Void SetGlobalVectorArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_OFFSET))(name, values, count);
		}

		static ::System::Void SetGlobalMatrixArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_OFFSET))(name, values, count);
		}

		static ::System::Void ExtractGlobalFloatArray(::System::Int32 name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALFLOATARRAY_OFFSET))(name, values);
		}

		static ::System::Void ExtractGlobalVectorArray(::System::Int32 name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALVECTORARRAY_OFFSET))(name, values);
		}

		static ::System::Void ExtractGlobalMatrixArray(::System::Int32 name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_EXTRACTGLOBALMATRIXARRAY_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalFloat_1(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalInt_1(::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalVector(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalVector_1(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalColor_1(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalMatrix(::System::String* name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrix_1(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalTexture(::System::String* name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalTexture_1(::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalTexture_2(::System::String* name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_2_OFFSET))(name, value, element);
		}

		static ::System::Void SetGlobalTexture_3(::System::Int32 nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_3_OFFSET))(nameID, value, element);
		}

		static ::System::Void SetGlobalBuffer(::System::String* name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalBuffer_1(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalConstantBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCONSTANTBUFFER_OFFSET))(nameID, value, offset, size);
		}

		static ::System::Void SetGlobalRayTracingAccelerationStructure(::System::String* name, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTURE_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalRayTracingAccelerationStructure_1(::System::Int32 nameID, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALRAYTRACINGACCELERATIONSTRUCTURE_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalFloatArray_1(::System::String* name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_1_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalFloatArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_2_OFFSET))(nameID, values);
		}

		static ::System::Void SetGlobalFloatArray_3(::System::String* name, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_3_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalFloatArray_4(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATARRAY_4_OFFSET))(nameID, values);
		}

		static ::System::Void SetGlobalVectorArray_1(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_1_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalVectorArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_2_OFFSET))(nameID, values);
		}

		static ::System::Void SetGlobalVectorArray_3(::System::String* name, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_3_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalVectorArray_4(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORARRAY_4_OFFSET))(nameID, values);
		}

		static ::System::Void SetGlobalMatrixArray_1(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_1_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalMatrixArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_2_OFFSET))(nameID, values);
		}

		static ::System::Void SetGlobalMatrixArray_3(::System::String* name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_3_OFFSET))(name, values);
		}

		static ::System::Void SetGlobalMatrixArray_4(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXARRAY_4_OFFSET))(nameID, values);
		}

		static ::System::Single GetGlobalFloat(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(name);
		}

		static ::System::Single GetGlobalFloat_1(::System::Int32 nameID)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_1_OFFSET))(nameID);
		}

		static ::System::Int32 GetGlobalInt(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINT_OFFSET))(name);
		}

		static ::System::Int32 GetGlobalInt_1(::System::Int32 nameID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALINT_1_OFFSET))(nameID);
		}

		static ::UnityEngine::Vector4 GetGlobalVector(::System::String* name)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(name);
		}

		static ::UnityEngine::Vector4 GetGlobalVector_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_1_OFFSET))(nameID);
		}

		static ::UnityEngine::Color GetGlobalColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALCOLOR_OFFSET))(name);
		}

		static ::UnityEngine::Color GetGlobalColor_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALCOLOR_1_OFFSET))(nameID);
		}

		static ::UnityEngine::Matrix4x4 GetGlobalMatrix(::System::String* name)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIX_OFFSET))(name);
		}

		static ::UnityEngine::Matrix4x4 GetGlobalMatrix_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIX_1_OFFSET))(nameID);
		}

		static ::UnityEngine::Texture* GetGlobalTexture(::System::String* name)
		{
			return ((::UnityEngine::Texture*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET))(name);
		}

		static ::UnityEngine::Texture* GetGlobalTexture_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Texture*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTURE_1_OFFSET))(nameID);
		}

		static ::Il2CppArray<::System::Single>* GetGlobalFloatArray(::System::String* name)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_OFFSET))(name);
		}

		static ::Il2CppArray<::System::Single>* GetGlobalFloatArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_1_OFFSET))(nameID);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>* GetGlobalVectorArray(::System::String* name)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_OFFSET))(name);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>* GetGlobalVectorArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_1_OFFSET))(nameID);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>* GetGlobalMatrixArray(::System::String* name)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_OFFSET))(name);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>* GetGlobalMatrixArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_1_OFFSET))(nameID);
		}

		static ::System::Void GetGlobalFloatArray_2(::System::String* name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_2_OFFSET))(name, values);
		}

		static ::System::Void GetGlobalFloatArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATARRAY_3_OFFSET))(nameID, values);
		}

		static ::System::Void GetGlobalVectorArray_2(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_2_OFFSET))(name, values);
		}

		static ::System::Void GetGlobalVectorArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORARRAY_3_OFFSET))(nameID, values);
		}

		static ::System::Void GetGlobalMatrixArray_2(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_2_OFFSET))(name, values);
		}

		static ::System::Void GetGlobalMatrixArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXARRAY_3_OFFSET))(nameID, values);
		}

		static ::System::String* GetPropertyName(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(shader, propertyIndex);
		}

		static ::System::Int32 GetPropertyNameId(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(shader, propertyIndex);
		}

		static ::System::String* GetPropertyDescription(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyFlags(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYFLAGS_OFFSET))(shader, propertyIndex);
		}

		static ::Il2CppArray<::System::String*>* GetPropertyAttributes(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(shader, propertyIndex);
		}

		static ::System::String* GetPropertyTextureDefaultName(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_OFFSET))(shader, propertyIndex);
		}

		static ::System::Void CheckPropertyIndex(::UnityEngine::Shader* s, ::System::Int32 propertyIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET))(s, propertyIndex);
		}

		::System::Int32 GetPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET))(this);
		}

		::System::Int32 FindPropertyIndex(::System::String* propertyName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPROPERTYINDEX_OFFSET))(this, propertyName);
		}

		::System::String* GetPropertyName_1(::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET))(this, propertyIndex);
		}

		::System::Int32 GetPropertyNameId_1(::System::Int32 propertyIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_1(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET))(this, propertyIndex);
		}

		::System::String* GetPropertyDescription_1(::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDESCRIPTION_1_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_1(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyFlags(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYFLAGS_1_OFFSET))(this, propertyIndex);
		}

		::Il2CppArray<::System::String*>* GetPropertyAttributes_1(::System::Int32 propertyIndex)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYATTRIBUTES_1_OFFSET))(this, propertyIndex);
		}

		::System::Single GetPropertyDefaultFloatValue(::System::Int32 propertyIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTFLOATVALUE_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Vector4 GetPropertyDefaultVectorValue(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVECTORVALUE_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Vector2 GetPropertyRangeLimits(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_1(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET))(this, propertyIndex);
		}

		::System::String* GetPropertyTextureDefaultName_1(::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDEFAULTNAME_1_OFFSET))(this, propertyIndex);
		}

		static ::System::Void SetGlobalVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET))(name, value);
		}

		static ::System::Void GetGlobalVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void GetGlobalMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALMATRIXIMPL_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET))(shader, propertyIndex, ret);
		}
	};
}
