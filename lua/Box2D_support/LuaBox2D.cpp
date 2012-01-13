/*
** Lua binding: Box2D
** Generated automatically by tolua++-1.0.92 on Fri Jan 13 09:31:03 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Box2D_open (lua_State* tolua_S);

#include <Box2D/Box2D.h>
#include <Box2D/Rope/b2Rope.h>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_b2Vec2 (lua_State* tolua_S)
{
 b2Vec2* self = (b2Vec2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2Filter (lua_State* tolua_S)
{
 b2Filter* self = (b2Filter*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2Shape (lua_State* tolua_S)
{
 b2Shape* self = (b2Shape*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2BodyDef (lua_State* tolua_S)
{
 b2BodyDef* self = (b2BodyDef*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2PolygonShape (lua_State* tolua_S)
{
 b2PolygonShape* self = (b2PolygonShape*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2FixtureDef (lua_State* tolua_S)
{
 b2FixtureDef* self = (b2FixtureDef*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_b2World (lua_State* tolua_S)
{
 b2World* self = (b2World*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"b2ContactEdge");
 tolua_usertype(tolua_S,"b2Shape");
 tolua_usertype(tolua_S,"b2JointEdge");
 tolua_usertype(tolua_S,"b2RayCastOutput");
 tolua_usertype(tolua_S,"b2Transform");
 tolua_usertype(tolua_S,"b2Fixture");
 tolua_usertype(tolua_S,"b2Filter");
 tolua_usertype(tolua_S,"b2World");
 tolua_usertype(tolua_S,"b2AABB");
 tolua_usertype(tolua_S,"b2FixtureDef");
 tolua_usertype(tolua_S,"b2FixtureProxy");
 tolua_usertype(tolua_S,"b2MassData");
 tolua_usertype(tolua_S,"b2BlockAllocator");
 tolua_usertype(tolua_S,"b2PolygonShape");
 tolua_usertype(tolua_S,"b2BodyDef");
 tolua_usertype(tolua_S,"b2Body");
 tolua_usertype(tolua_S,"b2Vec2");
 tolua_usertype(tolua_S,"b2RayCastInput");
}

/* method: new of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_new00
static int tolua_Box2D_b2Vec2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2Vec2* tolua_ret = (b2Vec2*)  Mtolua_new((b2Vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_new00_local
static int tolua_Box2D_b2Vec2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2Vec2* tolua_ret = (b2Vec2*)  Mtolua_new((b2Vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_new01
static int tolua_Box2D_b2Vec2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   b2Vec2* tolua_ret = (b2Vec2*)  Mtolua_new((b2Vec2)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Vec2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_new01_local
static int tolua_Box2D_b2Vec2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   b2Vec2* tolua_ret = (b2Vec2*)  Mtolua_new((b2Vec2)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Vec2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetZero of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_SetZero00
static int tolua_Box2D_b2Vec2_SetZero00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetZero'", NULL);
#endif
  {
   self->SetZero();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetZero'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Set of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Vec2_Set00
static int tolua_Box2D_b2Vec2_Set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
   float x_ = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y_ = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Set'", NULL);
#endif
  {
   self->Set(x_,y_);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_b2Vec2_x
static int tolua_get_b2Vec2_x(lua_State* tolua_S)
{
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_set_b2Vec2_x
static int tolua_set_b2Vec2_x(lua_State* tolua_S)
{
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_b2Vec2_y
static int tolua_get_b2Vec2_y(lua_State* tolua_S)
{
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  b2Vec2 */
#ifndef TOLUA_DISABLE_tolua_set_b2Vec2_y
static int tolua_set_b2Vec2_y(lua_State* tolua_S)
{
  b2Vec2* self = (b2Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_new00
static int tolua_Box2D_b2World_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2World",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Vec2* gravity = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   b2World* tolua_ret = (b2World*)  Mtolua_new((b2World)(*gravity));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2World");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_new00_local
static int tolua_Box2D_b2World_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2World",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Vec2* gravity = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   b2World* tolua_ret = (b2World*)  Mtolua_new((b2World)(*gravity));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2World");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_delete00
static int tolua_Box2D_b2World_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateBody of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_CreateBody00
static int tolua_Box2D_b2World_CreateBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const b2BodyDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  const b2BodyDef* def = ((const b2BodyDef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateBody'", NULL);
#endif
  {
   b2Body* tolua_ret = (b2Body*)  self->CreateBody(def);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Body");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DestroyBody of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_DestroyBody00
static int tolua_Box2D_b2World_DestroyBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  b2Body* body = ((b2Body*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DestroyBody'", NULL);
#endif
  {
   self->DestroyBody(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DestroyBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Step of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_Step00
static int tolua_Box2D_b2World_Step00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
   float timeStep = ((  float)  tolua_tonumber(tolua_S,2,0));
  signed int velocityIterations = (( signed int)  tolua_tonumber(tolua_S,3,0));
  signed int positionIterations = (( signed int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Step'", NULL);
#endif
  {
   self->Step(timeStep,velocityIterations,positionIterations);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Step'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBodyList of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetBodyList00
static int tolua_Box2D_b2World_GetBodyList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBodyList'", NULL);
#endif
  {
   b2Body* tolua_ret = (b2Body*)  self->GetBodyList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Body");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBodyList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBodyList of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetBodyList01
static int tolua_Box2D_b2World_GetBodyList01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBodyList'", NULL);
#endif
  {
   const b2Body* tolua_ret = (const b2Body*)  self->GetBodyList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Body");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2World_GetBodyList00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAllowSleeping of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetAllowSleeping00
static int tolua_Box2D_b2World_SetAllowSleeping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAllowSleeping'", NULL);
#endif
  {
   self->SetAllowSleeping(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAllowSleeping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAllowSleeping of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetAllowSleeping00
static int tolua_Box2D_b2World_GetAllowSleeping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAllowSleeping'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetAllowSleeping();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAllowSleeping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWarmStarting of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetWarmStarting00
static int tolua_Box2D_b2World_SetWarmStarting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWarmStarting'", NULL);
#endif
  {
   self->SetWarmStarting(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWarmStarting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWarmStarting of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetWarmStarting00
static int tolua_Box2D_b2World_GetWarmStarting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWarmStarting'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetWarmStarting();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWarmStarting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetContinuousPhysics of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetContinuousPhysics00
static int tolua_Box2D_b2World_SetContinuousPhysics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetContinuousPhysics'", NULL);
#endif
  {
   self->SetContinuousPhysics(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetContinuousPhysics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetContinuousPhysics of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetContinuousPhysics00
static int tolua_Box2D_b2World_GetContinuousPhysics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetContinuousPhysics'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetContinuousPhysics();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetContinuousPhysics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSubStepping of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetSubStepping00
static int tolua_Box2D_b2World_SetSubStepping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSubStepping'", NULL);
#endif
  {
   self->SetSubStepping(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSubStepping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSubStepping of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetSubStepping00
static int tolua_Box2D_b2World_GetSubStepping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSubStepping'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetSubStepping();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSubStepping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProxyCount of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetProxyCount00
static int tolua_Box2D_b2World_GetProxyCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProxyCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetProxyCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProxyCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBodyCount of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetBodyCount00
static int tolua_Box2D_b2World_GetBodyCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBodyCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetBodyCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBodyCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetJointCount of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetJointCount00
static int tolua_Box2D_b2World_GetJointCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetJointCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetJointCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetJointCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetContactCount of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetContactCount00
static int tolua_Box2D_b2World_GetContactCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetContactCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetContactCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetContactCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTreeHeight of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetTreeHeight00
static int tolua_Box2D_b2World_GetTreeHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTreeHeight'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetTreeHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTreeHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTreeBalance of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetTreeBalance00
static int tolua_Box2D_b2World_GetTreeBalance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTreeBalance'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetTreeBalance();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTreeBalance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTreeQuality of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetTreeQuality00
static int tolua_Box2D_b2World_GetTreeQuality00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTreeQuality'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetTreeQuality();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTreeQuality'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetGravity of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetGravity00
static int tolua_Box2D_b2World_SetGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* gravity = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetGravity'", NULL);
#endif
  {
   self->SetGravity(*gravity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetGravity of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetGravity00
static int tolua_Box2D_b2World_GetGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetGravity'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetGravity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsLocked of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_IsLocked00
static int tolua_Box2D_b2World_IsLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsLocked'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsLocked();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAutoClearForces of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_SetAutoClearForces00
static int tolua_Box2D_b2World_SetAutoClearForces00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAutoClearForces'", NULL);
#endif
  {
   self->SetAutoClearForces(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAutoClearForces'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAutoClearForces of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_GetAutoClearForces00
static int tolua_Box2D_b2World_GetAutoClearForces00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2World* self = (const b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAutoClearForces'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetAutoClearForces();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAutoClearForces'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dump of class  b2World */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2World_Dump00
static int tolua_Box2D_b2World_Dump00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2World",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2World* self = (b2World*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dump'", NULL);
#endif
  {
   self->Dump();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dump'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2BodyDef_new00
static int tolua_Box2D_b2BodyDef_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2BodyDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2BodyDef* tolua_ret = (b2BodyDef*)  Mtolua_new((b2BodyDef)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2BodyDef");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2BodyDef_new00_local
static int tolua_Box2D_b2BodyDef_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2BodyDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2BodyDef* tolua_ret = (b2BodyDef*)  Mtolua_new((b2BodyDef)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2BodyDef");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_type
static int tolua_get_b2BodyDef_type(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_type
static int tolua_set_b2BodyDef_type(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((b2BodyType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_position
static int tolua_get_b2BodyDef_position(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position,"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_position
static int tolua_set_b2BodyDef_position(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2Vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position = *((b2Vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angle of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_angle
static int tolua_get_b2BodyDef_angle(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angle of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_angle
static int tolua_set_b2BodyDef_angle(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angle = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: linearVelocity of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_linearVelocity
static int tolua_get_b2BodyDef_linearVelocity(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'linearVelocity'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->linearVelocity,"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: linearVelocity of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_linearVelocity
static int tolua_set_b2BodyDef_linearVelocity(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'linearVelocity'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2Vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->linearVelocity = *((b2Vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angularVelocity of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_angularVelocity
static int tolua_get_b2BodyDef_angularVelocity(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angularVelocity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angularVelocity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angularVelocity of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_angularVelocity
static int tolua_set_b2BodyDef_angularVelocity(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angularVelocity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angularVelocity = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: linearDamping of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_linearDamping
static int tolua_get_b2BodyDef_linearDamping(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'linearDamping'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->linearDamping);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: linearDamping of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_linearDamping
static int tolua_set_b2BodyDef_linearDamping(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'linearDamping'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->linearDamping = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angularDamping of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_angularDamping
static int tolua_get_b2BodyDef_angularDamping(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angularDamping'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angularDamping);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angularDamping of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_angularDamping
static int tolua_set_b2BodyDef_angularDamping(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angularDamping'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angularDamping = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: allowSleep of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_allowSleep
static int tolua_get_b2BodyDef_allowSleep(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'allowSleep'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->allowSleep);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: allowSleep of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_allowSleep
static int tolua_set_b2BodyDef_allowSleep(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'allowSleep'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->allowSleep = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: awake of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_awake
static int tolua_get_b2BodyDef_awake(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'awake'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->awake);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: awake of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_awake
static int tolua_set_b2BodyDef_awake(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'awake'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->awake = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fixedRotation of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_fixedRotation
static int tolua_get_b2BodyDef_fixedRotation(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fixedRotation'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->fixedRotation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fixedRotation of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_fixedRotation
static int tolua_set_b2BodyDef_fixedRotation(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fixedRotation'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fixedRotation = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bullet of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_bullet
static int tolua_get_b2BodyDef_bullet(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bullet'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->bullet);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bullet of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_bullet
static int tolua_set_b2BodyDef_bullet(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bullet'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bullet = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: active of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_active
static int tolua_get_b2BodyDef_active(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'active'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->active);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: active of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_active
static int tolua_set_b2BodyDef_active(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'active'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->active = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: userData of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_userData
static int tolua_get_b2BodyDef_userData(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userData'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->userData);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: userData of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_userData
static int tolua_set_b2BodyDef_userData(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userData'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->userData = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gravityScale of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_get_b2BodyDef_gravityScale
static int tolua_get_b2BodyDef_gravityScale(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravityScale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->gravityScale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gravityScale of class  b2BodyDef */
#ifndef TOLUA_DISABLE_tolua_set_b2BodyDef_gravityScale
static int tolua_set_b2BodyDef_gravityScale(lua_State* tolua_S)
{
  b2BodyDef* self = (b2BodyDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravityScale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gravityScale = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateFixture of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_CreateFixture00
static int tolua_Box2D_b2Body_CreateFixture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const b2FixtureDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2FixtureDef* def = ((const b2FixtureDef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateFixture'", NULL);
#endif
  {
   b2Fixture* tolua_ret = (b2Fixture*)  self->CreateFixture(def);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Fixture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateFixture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateFixture of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_CreateFixture01
static int tolua_Box2D_b2Body_CreateFixture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const b2Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Shape* shape = ((const b2Shape*)  tolua_tousertype(tolua_S,2,0));
   float density = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateFixture'", NULL);
#endif
  {
   b2Fixture* tolua_ret = (b2Fixture*)  self->CreateFixture(shape,density);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Fixture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_CreateFixture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: DestroyFixture of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_DestroyFixture00
static int tolua_Box2D_b2Body_DestroyFixture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  b2Fixture* fixture = ((b2Fixture*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DestroyFixture'", NULL);
#endif
  {
   self->DestroyFixture(fixture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DestroyFixture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTransform of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetTransform00
static int tolua_Box2D_b2Body_SetTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* position = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
   float angle = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTransform'", NULL);
#endif
  {
   self->SetTransform(*position,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTransform of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetTransform00
static int tolua_Box2D_b2Body_GetTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTransform'", NULL);
#endif
  {
   const b2Transform& tolua_ret = (const b2Transform&)  self->GetTransform();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Transform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetPosition00
static int tolua_Box2D_b2Body_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   const b2Vec2& tolua_ret = (const b2Vec2&)  self->GetPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAngle of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetAngle00
static int tolua_Box2D_b2Body_GetAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAngle'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetAngle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldCenter of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetWorldCenter00
static int tolua_Box2D_b2Body_GetWorldCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldCenter'", NULL);
#endif
  {
   const b2Vec2& tolua_ret = (const b2Vec2&)  self->GetWorldCenter();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLocalCenter of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLocalCenter00
static int tolua_Box2D_b2Body_GetLocalCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLocalCenter'", NULL);
#endif
  {
   const b2Vec2& tolua_ret = (const b2Vec2&)  self->GetLocalCenter();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLocalCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLinearVelocity of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetLinearVelocity00
static int tolua_Box2D_b2Body_SetLinearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* v = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLinearVelocity'", NULL);
#endif
  {
   self->SetLinearVelocity(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLinearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLinearVelocity of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLinearVelocity00
static int tolua_Box2D_b2Body_GetLinearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLinearVelocity'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetLinearVelocity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLinearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAngularVelocity of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetAngularVelocity00
static int tolua_Box2D_b2Body_SetAngularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float omega = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAngularVelocity'", NULL);
#endif
  {
   self->SetAngularVelocity(omega);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAngularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAngularVelocity of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetAngularVelocity00
static int tolua_Box2D_b2Body_GetAngularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAngularVelocity'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetAngularVelocity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAngularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ApplyForce of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ApplyForce00
static int tolua_Box2D_b2Body_ApplyForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* force = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
  const b2Vec2* point = ((const b2Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ApplyForce'", NULL);
#endif
  {
   self->ApplyForce(*force,*point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ApplyForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ApplyForceToCenter of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ApplyForceToCenter00
static int tolua_Box2D_b2Body_ApplyForceToCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* force = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ApplyForceToCenter'", NULL);
#endif
  {
   self->ApplyForceToCenter(*force);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ApplyForceToCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ApplyTorque of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ApplyTorque00
static int tolua_Box2D_b2Body_ApplyTorque00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float torque = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ApplyTorque'", NULL);
#endif
  {
   self->ApplyTorque(torque);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ApplyTorque'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ApplyLinearImpulse of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ApplyLinearImpulse00
static int tolua_Box2D_b2Body_ApplyLinearImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* impulse = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
  const b2Vec2* point = ((const b2Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ApplyLinearImpulse'", NULL);
#endif
  {
   self->ApplyLinearImpulse(*impulse,*point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ApplyLinearImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ApplyAngularImpulse of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ApplyAngularImpulse00
static int tolua_Box2D_b2Body_ApplyAngularImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float impulse = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ApplyAngularImpulse'", NULL);
#endif
  {
   self->ApplyAngularImpulse(impulse);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ApplyAngularImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMass of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetMass00
static int tolua_Box2D_b2Body_GetMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMass'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetMass();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInertia of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetInertia00
static int tolua_Box2D_b2Body_GetInertia00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInertia'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetInertia();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInertia'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMassData of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetMassData00
static int tolua_Box2D_b2Body_GetMassData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2MassData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  b2MassData* data = ((b2MassData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMassData'", NULL);
#endif
  {
   self->GetMassData(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMassData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMassData of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetMassData00
static int tolua_Box2D_b2Body_SetMassData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const b2MassData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2MassData* data = ((const b2MassData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMassData'", NULL);
#endif
  {
   self->SetMassData(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMassData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ResetMassData of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_ResetMassData00
static int tolua_Box2D_b2Body_ResetMassData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ResetMassData'", NULL);
#endif
  {
   self->ResetMassData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ResetMassData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldPoint of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetWorldPoint00
static int tolua_Box2D_b2Body_GetWorldPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* localPoint = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldPoint'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetWorldPoint(*localPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldVector of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetWorldVector00
static int tolua_Box2D_b2Body_GetWorldVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* localVector = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldVector'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetWorldVector(*localVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLocalPoint of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLocalPoint00
static int tolua_Box2D_b2Body_GetLocalPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* worldPoint = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLocalPoint'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetLocalPoint(*worldPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLocalPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLocalVector of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLocalVector00
static int tolua_Box2D_b2Body_GetLocalVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* worldVector = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLocalVector'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetLocalVector(*worldVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLocalVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLinearVelocityFromWorldPoint of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLinearVelocityFromWorldPoint00
static int tolua_Box2D_b2Body_GetLinearVelocityFromWorldPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* worldPoint = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLinearVelocityFromWorldPoint'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetLinearVelocityFromWorldPoint(*worldPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLinearVelocityFromWorldPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLinearVelocityFromLocalPoint of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLinearVelocityFromLocalPoint00
static int tolua_Box2D_b2Body_GetLinearVelocityFromLocalPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* localPoint = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLinearVelocityFromLocalPoint'", NULL);
#endif
  {
   b2Vec2 tolua_ret = (b2Vec2)  self->GetLinearVelocityFromLocalPoint(*localPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((b2Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(b2Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"b2Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLinearVelocityFromLocalPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLinearDamping of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetLinearDamping00
static int tolua_Box2D_b2Body_GetLinearDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLinearDamping'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetLinearDamping();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLinearDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLinearDamping of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetLinearDamping00
static int tolua_Box2D_b2Body_SetLinearDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float linearDamping = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLinearDamping'", NULL);
#endif
  {
   self->SetLinearDamping(linearDamping);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLinearDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAngularDamping of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetAngularDamping00
static int tolua_Box2D_b2Body_GetAngularDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAngularDamping'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetAngularDamping();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAngularDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAngularDamping of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetAngularDamping00
static int tolua_Box2D_b2Body_SetAngularDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float angularDamping = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAngularDamping'", NULL);
#endif
  {
   self->SetAngularDamping(angularDamping);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAngularDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetGravityScale of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetGravityScale00
static int tolua_Box2D_b2Body_GetGravityScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetGravityScale'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetGravityScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetGravityScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetGravityScale of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetGravityScale00
static int tolua_Box2D_b2Body_SetGravityScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
   float scale = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetGravityScale'", NULL);
#endif
  {
   self->SetGravityScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGravityScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetType of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetType00
static int tolua_Box2D_b2Body_SetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  b2BodyType type = ((b2BodyType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetType'", NULL);
#endif
  {
   self->SetType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetType of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetType00
static int tolua_Box2D_b2Body_GetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetType'", NULL);
#endif
  {
   b2BodyType tolua_ret = (b2BodyType)  self->GetType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetBullet of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetBullet00
static int tolua_Box2D_b2Body_SetBullet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetBullet'", NULL);
#endif
  {
   self->SetBullet(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetBullet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsBullet of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_IsBullet00
static int tolua_Box2D_b2Body_IsBullet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsBullet'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsBullet();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsBullet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSleepingAllowed of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetSleepingAllowed00
static int tolua_Box2D_b2Body_SetSleepingAllowed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSleepingAllowed'", NULL);
#endif
  {
   self->SetSleepingAllowed(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSleepingAllowed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsSleepingAllowed of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_IsSleepingAllowed00
static int tolua_Box2D_b2Body_IsSleepingAllowed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsSleepingAllowed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsSleepingAllowed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsSleepingAllowed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAwake of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetAwake00
static int tolua_Box2D_b2Body_SetAwake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAwake'", NULL);
#endif
  {
   self->SetAwake(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAwake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAwake of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_IsAwake00
static int tolua_Box2D_b2Body_IsAwake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsAwake'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsAwake();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsAwake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActive of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetActive00
static int tolua_Box2D_b2Body_SetActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetActive'", NULL);
#endif
  {
   self->SetActive(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsActive of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_IsActive00
static int tolua_Box2D_b2Body_IsActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFixedRotation of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetFixedRotation00
static int tolua_Box2D_b2Body_SetFixedRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFixedRotation'", NULL);
#endif
  {
   self->SetFixedRotation(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFixedRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsFixedRotation of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_IsFixedRotation00
static int tolua_Box2D_b2Body_IsFixedRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsFixedRotation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsFixedRotation();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsFixedRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFixtureList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetFixtureList00
static int tolua_Box2D_b2Body_GetFixtureList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFixtureList'", NULL);
#endif
  {
   b2Fixture* tolua_ret = (b2Fixture*)  self->GetFixtureList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Fixture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFixtureList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFixtureList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetFixtureList01
static int tolua_Box2D_b2Body_GetFixtureList01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFixtureList'", NULL);
#endif
  {
   const b2Fixture* tolua_ret = (const b2Fixture*)  self->GetFixtureList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Fixture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_GetFixtureList00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetJointList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetJointList00
static int tolua_Box2D_b2Body_GetJointList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetJointList'", NULL);
#endif
  {
   b2JointEdge* tolua_ret = (b2JointEdge*)  self->GetJointList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2JointEdge");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetJointList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetJointList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetJointList01
static int tolua_Box2D_b2Body_GetJointList01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetJointList'", NULL);
#endif
  {
   const b2JointEdge* tolua_ret = (const b2JointEdge*)  self->GetJointList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2JointEdge");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_GetJointList00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetContactList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetContactList00
static int tolua_Box2D_b2Body_GetContactList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetContactList'", NULL);
#endif
  {
   b2ContactEdge* tolua_ret = (b2ContactEdge*)  self->GetContactList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2ContactEdge");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetContactList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetContactList of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetContactList01
static int tolua_Box2D_b2Body_GetContactList01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetContactList'", NULL);
#endif
  {
   const b2ContactEdge* tolua_ret = (const b2ContactEdge*)  self->GetContactList();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2ContactEdge");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_GetContactList00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNext of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetNext00
static int tolua_Box2D_b2Body_GetNext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNext'", NULL);
#endif
  {
   b2Body* tolua_ret = (b2Body*)  self->GetNext();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Body");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNext of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetNext01
static int tolua_Box2D_b2Body_GetNext01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNext'", NULL);
#endif
  {
   const b2Body* tolua_ret = (const b2Body*)  self->GetNext();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Body");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_GetNext00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUserData of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetUserData00
static int tolua_Box2D_b2Body_GetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUserData'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->GetUserData();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUserData of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_SetUserData00
static int tolua_Box2D_b2Body_SetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUserData'", NULL);
#endif
  {
   self->SetUserData(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorld of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetWorld00
static int tolua_Box2D_b2Body_GetWorld00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorld'", NULL);
#endif
  {
   b2World* tolua_ret = (b2World*)  self->GetWorld();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2World");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorld'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorld of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_GetWorld01
static int tolua_Box2D_b2Body_GetWorld01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Body* self = (const b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorld'", NULL);
#endif
  {
   const b2World* tolua_ret = (const b2World*)  self->GetWorld();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2World");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Body_GetWorld00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dump of class  b2Body */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Body_Dump00
static int tolua_Box2D_b2Body_Dump00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Body",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Body* self = (b2Body*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dump'", NULL);
#endif
  {
   self->Dump();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dump'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Filter_new00
static int tolua_Box2D_b2Filter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Filter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2Filter* tolua_ret = (b2Filter*)  Mtolua_new((b2Filter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Filter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Filter_new00_local
static int tolua_Box2D_b2Filter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2Filter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2Filter* tolua_ret = (b2Filter*)  Mtolua_new((b2Filter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Filter");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: categoryBits of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_get_b2Filter_unsigned_categoryBits
static int tolua_get_b2Filter_unsigned_categoryBits(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'categoryBits'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->categoryBits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: categoryBits of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_set_b2Filter_unsigned_categoryBits
static int tolua_set_b2Filter_unsigned_categoryBits(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'categoryBits'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->categoryBits = (( unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maskBits of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_get_b2Filter_unsigned_maskBits
static int tolua_get_b2Filter_unsigned_maskBits(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maskBits'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maskBits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maskBits of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_set_b2Filter_unsigned_maskBits
static int tolua_set_b2Filter_unsigned_maskBits(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maskBits'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maskBits = (( unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: groupIndex of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_get_b2Filter_groupIndex
static int tolua_get_b2Filter_groupIndex(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'groupIndex'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->groupIndex);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: groupIndex of class  b2Filter */
#ifndef TOLUA_DISABLE_tolua_set_b2Filter_groupIndex
static int tolua_set_b2Filter_groupIndex(lua_State* tolua_S)
{
  b2Filter* self = (b2Filter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'groupIndex'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->groupIndex = (( signed short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2FixtureDef_new00
static int tolua_Box2D_b2FixtureDef_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2FixtureDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2FixtureDef* tolua_ret = (b2FixtureDef*)  Mtolua_new((b2FixtureDef)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2FixtureDef");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2FixtureDef_new00_local
static int tolua_Box2D_b2FixtureDef_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2FixtureDef",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2FixtureDef* tolua_ret = (b2FixtureDef*)  Mtolua_new((b2FixtureDef)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2FixtureDef");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shape of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_shape_ptr
static int tolua_get_b2FixtureDef_shape_ptr(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->shape,"b2Shape");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shape of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_shape_ptr
static int tolua_set_b2FixtureDef_shape_ptr(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shape'",NULL);
  if (!tolua_isusertype(tolua_S,2,"b2Shape",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shape = ((b2Shape*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: userData of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_userData
static int tolua_get_b2FixtureDef_userData(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userData'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->userData);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: userData of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_userData
static int tolua_set_b2FixtureDef_userData(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userData'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->userData = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: friction of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_friction
static int tolua_get_b2FixtureDef_friction(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'friction'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->friction);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: friction of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_friction
static int tolua_set_b2FixtureDef_friction(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'friction'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->friction = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: restitution of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_restitution
static int tolua_get_b2FixtureDef_restitution(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'restitution'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->restitution);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: restitution of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_restitution
static int tolua_set_b2FixtureDef_restitution(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'restitution'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->restitution = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: density of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_density
static int tolua_get_b2FixtureDef_density(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'density'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->density);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: density of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_density
static int tolua_set_b2FixtureDef_density(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'density'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->density = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isSensor of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_isSensor
static int tolua_get_b2FixtureDef_isSensor(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isSensor'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->isSensor);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isSensor of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_isSensor
static int tolua_set_b2FixtureDef_isSensor(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isSensor'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->isSensor = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: filter of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureDef_filter
static int tolua_get_b2FixtureDef_filter(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filter'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->filter,"b2Filter");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: filter of class  b2FixtureDef */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureDef_filter
static int tolua_set_b2FixtureDef_filter(lua_State* tolua_S)
{
  b2FixtureDef* self = (b2FixtureDef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filter'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2Filter",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->filter = *((b2Filter*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: aabb of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureProxy_aabb
static int tolua_get_b2FixtureProxy_aabb(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'aabb'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->aabb,"b2AABB");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: aabb of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureProxy_aabb
static int tolua_set_b2FixtureProxy_aabb(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'aabb'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2AABB",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->aabb = *((b2AABB*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fixture of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureProxy_fixture_ptr
static int tolua_get_b2FixtureProxy_fixture_ptr(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fixture'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->fixture,"b2Fixture");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fixture of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureProxy_fixture_ptr
static int tolua_set_b2FixtureProxy_fixture_ptr(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fixture'",NULL);
  if (!tolua_isusertype(tolua_S,2,"b2Fixture",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fixture = ((b2Fixture*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: childIndex of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureProxy_childIndex
static int tolua_get_b2FixtureProxy_childIndex(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'childIndex'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->childIndex);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: childIndex of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureProxy_childIndex
static int tolua_set_b2FixtureProxy_childIndex(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'childIndex'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->childIndex = (( signed int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: proxyId of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_get_b2FixtureProxy_proxyId
static int tolua_get_b2FixtureProxy_proxyId(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'proxyId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->proxyId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: proxyId of class  b2FixtureProxy */
#ifndef TOLUA_DISABLE_tolua_set_b2FixtureProxy_proxyId
static int tolua_set_b2FixtureProxy_proxyId(lua_State* tolua_S)
{
  b2FixtureProxy* self = (b2FixtureProxy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'proxyId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->proxyId = (( signed int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetType of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetType00
static int tolua_Box2D_b2Fixture_GetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetType'", NULL);
#endif
  {
   b2Shape::Type tolua_ret = (b2Shape::Type)  self->GetType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShape of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetShape00
static int tolua_Box2D_b2Fixture_GetShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShape'", NULL);
#endif
  {
   b2Shape* tolua_ret = (b2Shape*)  self->GetShape();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Shape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShape of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetShape01
static int tolua_Box2D_b2Fixture_GetShape01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShape'", NULL);
#endif
  {
   const b2Shape* tolua_ret = (const b2Shape*)  self->GetShape();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Shape");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Fixture_GetShape00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSensor of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetSensor00
static int tolua_Box2D_b2Fixture_SetSensor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  bool sensor = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSensor'", NULL);
#endif
  {
   self->SetSensor(sensor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSensor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsSensor of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_IsSensor00
static int tolua_Box2D_b2Fixture_IsSensor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsSensor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsSensor();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsSensor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFilterData of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetFilterData00
static int tolua_Box2D_b2Fixture_SetFilterData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Filter",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  const b2Filter* filter = ((const b2Filter*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFilterData'", NULL);
#endif
  {
   self->SetFilterData(*filter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFilterData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFilterData of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetFilterData00
static int tolua_Box2D_b2Fixture_GetFilterData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFilterData'", NULL);
#endif
  {
   const b2Filter& tolua_ret = (const b2Filter&)  self->GetFilterData();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Filter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFilterData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Refilter of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_Refilter00
static int tolua_Box2D_b2Fixture_Refilter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Refilter'", NULL);
#endif
  {
   self->Refilter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Refilter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBody of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetBody00
static int tolua_Box2D_b2Fixture_GetBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBody'", NULL);
#endif
  {
   b2Body* tolua_ret = (b2Body*)  self->GetBody();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Body");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBody of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetBody01
static int tolua_Box2D_b2Fixture_GetBody01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBody'", NULL);
#endif
  {
   const b2Body* tolua_ret = (const b2Body*)  self->GetBody();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Body");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Fixture_GetBody00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNext of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetNext00
static int tolua_Box2D_b2Fixture_GetNext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNext'", NULL);
#endif
  {
   b2Fixture* tolua_ret = (b2Fixture*)  self->GetNext();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Fixture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNext of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetNext01
static int tolua_Box2D_b2Fixture_GetNext01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNext'", NULL);
#endif
  {
   const b2Fixture* tolua_ret = (const b2Fixture*)  self->GetNext();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const b2Fixture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Box2D_b2Fixture_GetNext00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUserData of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetUserData00
static int tolua_Box2D_b2Fixture_GetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUserData'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->GetUserData();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUserData of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetUserData00
static int tolua_Box2D_b2Fixture_SetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUserData'", NULL);
#endif
  {
   self->SetUserData(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestPoint of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_TestPoint00
static int tolua_Box2D_b2Fixture_TestPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* p = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->TestPoint(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TestPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RayCast of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_RayCast00
static int tolua_Box2D_b2Fixture_RayCast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2RayCastOutput",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2RayCastInput",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  b2RayCastOutput* output = ((b2RayCastOutput*)  tolua_tousertype(tolua_S,2,0));
  const b2RayCastInput* input = ((const b2RayCastInput*)  tolua_tousertype(tolua_S,3,0));
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RayCast'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RayCast(output,*input,childIndex);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RayCast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMassData of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetMassData00
static int tolua_Box2D_b2Fixture_GetMassData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2MassData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  b2MassData* massData = ((b2MassData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMassData'", NULL);
#endif
  {
   self->GetMassData(massData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMassData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDensity of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetDensity00
static int tolua_Box2D_b2Fixture_SetDensity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
   float density = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDensity'", NULL);
#endif
  {
   self->SetDensity(density);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDensity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDensity of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetDensity00
static int tolua_Box2D_b2Fixture_GetDensity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDensity'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetDensity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDensity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFriction of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetFriction00
static int tolua_Box2D_b2Fixture_GetFriction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFriction'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetFriction();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFriction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFriction of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetFriction00
static int tolua_Box2D_b2Fixture_SetFriction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
   float friction = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFriction'", NULL);
#endif
  {
   self->SetFriction(friction);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFriction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRestitution of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetRestitution00
static int tolua_Box2D_b2Fixture_GetRestitution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRestitution'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->GetRestitution();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRestitution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRestitution of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_SetRestitution00
static int tolua_Box2D_b2Fixture_SetRestitution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
   float restitution = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRestitution'", NULL);
#endif
  {
   self->SetRestitution(restitution);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRestitution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAABB of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_GetAABB00
static int tolua_Box2D_b2Fixture_GetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Fixture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Fixture* self = (const b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAABB'", NULL);
#endif
  {
   const b2AABB& tolua_ret = (const b2AABB&)  self->GetAABB(childIndex);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2AABB");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dump of class  b2Fixture */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Fixture_Dump00
static int tolua_Box2D_b2Fixture_Dump00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Fixture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Fixture* self = (b2Fixture*)  tolua_tousertype(tolua_S,1,0);
  signed int bodyIndex = (( signed int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dump'", NULL);
#endif
  {
   self->Dump(bodyIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dump'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mass of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_get_b2MassData_mass
static int tolua_get_b2MassData_mass(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mass'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mass);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mass of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_set_b2MassData_mass
static int tolua_set_b2MassData_mass(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mass'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mass = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: center of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_get_b2MassData_center
static int tolua_get_b2MassData_center(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'center'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->center,"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: center of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_set_b2MassData_center
static int tolua_set_b2MassData_center(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'center'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2Vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->center = *((b2Vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: I of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_get_b2MassData_I
static int tolua_get_b2MassData_I(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'I'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->I);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: I of class  b2MassData */
#ifndef TOLUA_DISABLE_tolua_set_b2MassData_I
static int tolua_set_b2MassData_I(lua_State* tolua_S)
{
  b2MassData* self = (b2MassData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'I'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->I = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_delete00
static int tolua_Box2D_b2Shape_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2Shape* self = (b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clone of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_Clone00
static int tolua_Box2D_b2Shape_Clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2BlockAllocator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
  b2BlockAllocator* allocator = ((b2BlockAllocator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clone'", NULL);
#endif
  {
   b2Shape* tolua_ret = (b2Shape*)  self->Clone(allocator);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Shape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetType of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_GetType00
static int tolua_Box2D_b2Shape_GetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetType'", NULL);
#endif
  {
   b2Shape::Type tolua_ret = (b2Shape::Type)  self->GetType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetChildCount of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_GetChildCount00
static int tolua_Box2D_b2Shape_GetChildCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetChildCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetChildCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetChildCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestPoint of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_TestPoint00
static int tolua_Box2D_b2Shape_TestPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Transform",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
  const b2Transform* xf = ((const b2Transform*)  tolua_tousertype(tolua_S,2,0));
  const b2Vec2* p = ((const b2Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->TestPoint(*xf,*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TestPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RayCast of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_RayCast00
static int tolua_Box2D_b2Shape_RayCast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2RayCastOutput",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2RayCastInput",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const b2Transform",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
  b2RayCastOutput* output = ((b2RayCastOutput*)  tolua_tousertype(tolua_S,2,0));
  const b2RayCastInput* input = ((const b2RayCastInput*)  tolua_tousertype(tolua_S,3,0));
  const b2Transform* transform = ((const b2Transform*)  tolua_tousertype(tolua_S,4,0));
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RayCast'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RayCast(output,*input,*transform,childIndex);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RayCast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ComputeAABB of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_ComputeAABB00
static int tolua_Box2D_b2Shape_ComputeAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2AABB",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Transform",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
  b2AABB* aabb = ((b2AABB*)  tolua_tousertype(tolua_S,2,0));
  const b2Transform* xf = ((const b2Transform*)  tolua_tousertype(tolua_S,3,0));
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ComputeAABB'", NULL);
#endif
  {
   self->ComputeAABB(aabb,*xf,childIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ComputeAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ComputeMass of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2Shape_ComputeMass00
static int tolua_Box2D_b2Shape_ComputeMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2MassData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2Shape* self = (const b2Shape*)  tolua_tousertype(tolua_S,1,0);
  b2MassData* massData = ((b2MassData*)  tolua_tousertype(tolua_S,2,0));
   float density = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ComputeMass'", NULL);
#endif
  {
   self->ComputeMass(massData,density);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ComputeMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_type of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_get_b2Shape_m_type
static int tolua_get_b2Shape_m_type(lua_State* tolua_S)
{
  b2Shape* self = (b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_type of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_set_b2Shape_m_type
static int tolua_set_b2Shape_m_type(lua_State* tolua_S)
{
  b2Shape* self = (b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_type = ((b2Shape::Type) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_radius of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_get_b2Shape_m_radius
static int tolua_get_b2Shape_m_radius(lua_State* tolua_S)
{
  b2Shape* self = (b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_radius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_radius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_radius of class  b2Shape */
#ifndef TOLUA_DISABLE_tolua_set_b2Shape_m_radius
static int tolua_set_b2Shape_m_radius(lua_State* tolua_S)
{
  b2Shape* self = (b2Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_radius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_radius = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_new00
static int tolua_Box2D_b2PolygonShape_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2PolygonShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2PolygonShape* tolua_ret = (b2PolygonShape*)  Mtolua_new((b2PolygonShape)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2PolygonShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_new00_local
static int tolua_Box2D_b2PolygonShape_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"b2PolygonShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   b2PolygonShape* tolua_ret = (b2PolygonShape*)  Mtolua_new((b2PolygonShape)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2PolygonShape");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clone of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_Clone00
static int tolua_Box2D_b2PolygonShape_Clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2BlockAllocator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  b2BlockAllocator* allocator = ((b2BlockAllocator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clone'", NULL);
#endif
  {
   b2Shape* tolua_ret = (b2Shape*)  self->Clone(allocator);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"b2Shape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetChildCount of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_GetChildCount00
static int tolua_Box2D_b2PolygonShape_GetChildCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetChildCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetChildCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetChildCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Set of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_Set00
static int tolua_Box2D_b2PolygonShape_Set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2PolygonShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const b2Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  const b2Vec2* vertices = ((const b2Vec2*)  tolua_tousertype(tolua_S,2,0));
  signed int vertexCount = (( signed int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Set'", NULL);
#endif
  {
   self->Set(vertices,vertexCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAsBox of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_SetAsBox00
static int tolua_Box2D_b2PolygonShape_SetAsBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2PolygonShape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
   float hx = ((  float)  tolua_tonumber(tolua_S,2,0));
   float hy = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAsBox'", NULL);
#endif
  {
   self->SetAsBox(hx,hy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAsBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAsBox of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_SetAsBox01
static int tolua_Box2D_b2PolygonShape_SetAsBox01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"b2PolygonShape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
   float hx = ((  float)  tolua_tonumber(tolua_S,2,0));
   float hy = ((  float)  tolua_tonumber(tolua_S,3,0));
  const b2Vec2* center = ((const b2Vec2*)  tolua_tousertype(tolua_S,4,0));
   float angle = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAsBox'", NULL);
#endif
  {
   self->SetAsBox(hx,hy,*center,angle);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Box2D_b2PolygonShape_SetAsBox00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestPoint of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_TestPoint00
static int tolua_Box2D_b2PolygonShape_TestPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const b2Transform",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  const b2Transform* transform = ((const b2Transform*)  tolua_tousertype(tolua_S,2,0));
  const b2Vec2* p = ((const b2Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->TestPoint(*transform,*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TestPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RayCast of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_RayCast00
static int tolua_Box2D_b2PolygonShape_RayCast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2RayCastOutput",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2RayCastInput",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const b2Transform",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  b2RayCastOutput* output = ((b2RayCastOutput*)  tolua_tousertype(tolua_S,2,0));
  const b2RayCastInput* input = ((const b2RayCastInput*)  tolua_tousertype(tolua_S,3,0));
  const b2Transform* transform = ((const b2Transform*)  tolua_tousertype(tolua_S,4,0));
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RayCast'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RayCast(output,*input,*transform,childIndex);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RayCast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ComputeAABB of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_ComputeAABB00
static int tolua_Box2D_b2PolygonShape_ComputeAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2AABB",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const b2Transform",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  b2AABB* aabb = ((b2AABB*)  tolua_tousertype(tolua_S,2,0));
  const b2Transform* transform = ((const b2Transform*)  tolua_tousertype(tolua_S,3,0));
  signed int childIndex = (( signed int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ComputeAABB'", NULL);
#endif
  {
   self->ComputeAABB(aabb,*transform,childIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ComputeAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ComputeMass of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_ComputeMass00
static int tolua_Box2D_b2PolygonShape_ComputeMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"b2MassData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  b2MassData* massData = ((b2MassData*)  tolua_tousertype(tolua_S,2,0));
   float density = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ComputeMass'", NULL);
#endif
  {
   self->ComputeMass(massData,density);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ComputeMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexCount of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_GetVertexCount00
static int tolua_Box2D_b2PolygonShape_GetVertexCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexCount'", NULL);
#endif
  {
   signed int tolua_ret = ( signed int)  self->GetVertexCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertexCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertex of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_Box2D_b2PolygonShape_GetVertex00
static int tolua_Box2D_b2PolygonShape_GetVertex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const b2PolygonShape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const b2PolygonShape* self = (const b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
  signed int index = (( signed int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertex'", NULL);
#endif
  {
   const b2Vec2& tolua_ret = (const b2Vec2&)  self->GetVertex(index);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const b2Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_centroid of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_get_b2PolygonShape_m_centroid
static int tolua_get_b2PolygonShape_m_centroid(lua_State* tolua_S)
{
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_centroid'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_centroid,"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_centroid of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_set_b2PolygonShape_m_centroid
static int tolua_set_b2PolygonShape_m_centroid(lua_State* tolua_S)
{
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_centroid'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"b2Vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_centroid = *((b2Vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_vertices of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_get_Box2D_b2PolygonShape_m_vertices
static int tolua_get_Box2D_b2PolygonShape_m_vertices(lua_State* tolua_S)
{
 int tolua_index;
  b2PolygonShape* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (b2PolygonShape*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=b2_maxPolygonVertices)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->m_vertices[tolua_index],"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_vertices of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_set_Box2D_b2PolygonShape_m_vertices
static int tolua_set_Box2D_b2PolygonShape_m_vertices(lua_State* tolua_S)
{
 int tolua_index;
  b2PolygonShape* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (b2PolygonShape*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=b2_maxPolygonVertices)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->m_vertices[tolua_index] = *((b2Vec2*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_normals of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_get_Box2D_b2PolygonShape_m_normals
static int tolua_get_Box2D_b2PolygonShape_m_normals(lua_State* tolua_S)
{
 int tolua_index;
  b2PolygonShape* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (b2PolygonShape*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=b2_maxPolygonVertices)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->m_normals[tolua_index],"b2Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_normals of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_set_Box2D_b2PolygonShape_m_normals
static int tolua_set_Box2D_b2PolygonShape_m_normals(lua_State* tolua_S)
{
 int tolua_index;
  b2PolygonShape* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (b2PolygonShape*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=b2_maxPolygonVertices)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->m_normals[tolua_index] = *((b2Vec2*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_vertexCount of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_get_b2PolygonShape_m_vertexCount
static int tolua_get_b2PolygonShape_m_vertexCount(lua_State* tolua_S)
{
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vertexCount'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_vertexCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_vertexCount of class  b2PolygonShape */
#ifndef TOLUA_DISABLE_tolua_set_b2PolygonShape_m_vertexCount
static int tolua_set_b2PolygonShape_m_vertexCount(lua_State* tolua_S)
{
  b2PolygonShape* self = (b2PolygonShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vertexCount'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_vertexCount = (( signed int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Box2D_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2Vec2","b2Vec2","",tolua_collect_b2Vec2);
  #else
  tolua_cclass(tolua_S,"b2Vec2","b2Vec2","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2Vec2");
   tolua_function(tolua_S,"new",tolua_Box2D_b2Vec2_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2Vec2_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2Vec2_new00_local);
   tolua_function(tolua_S,"new",tolua_Box2D_b2Vec2_new01);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2Vec2_new01_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2Vec2_new01_local);
   tolua_function(tolua_S,"SetZero",tolua_Box2D_b2Vec2_SetZero00);
   tolua_function(tolua_S,"Set",tolua_Box2D_b2Vec2_Set00);
   tolua_variable(tolua_S,"x",tolua_get_b2Vec2_x,tolua_set_b2Vec2_x);
   tolua_variable(tolua_S,"y",tolua_get_b2Vec2_y,tolua_set_b2Vec2_y);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2World","b2World","",tolua_collect_b2World);
  #else
  tolua_cclass(tolua_S,"b2World","b2World","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2World");
   tolua_function(tolua_S,"new",tolua_Box2D_b2World_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2World_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2World_new00_local);
   tolua_function(tolua_S,"delete",tolua_Box2D_b2World_delete00);
   tolua_function(tolua_S,"CreateBody",tolua_Box2D_b2World_CreateBody00);
   tolua_function(tolua_S,"DestroyBody",tolua_Box2D_b2World_DestroyBody00);
   tolua_function(tolua_S,"Step",tolua_Box2D_b2World_Step00);
   tolua_function(tolua_S,"GetBodyList",tolua_Box2D_b2World_GetBodyList00);
   tolua_function(tolua_S,"GetBodyList",tolua_Box2D_b2World_GetBodyList01);
   tolua_function(tolua_S,"SetAllowSleeping",tolua_Box2D_b2World_SetAllowSleeping00);
   tolua_function(tolua_S,"GetAllowSleeping",tolua_Box2D_b2World_GetAllowSleeping00);
   tolua_function(tolua_S,"SetWarmStarting",tolua_Box2D_b2World_SetWarmStarting00);
   tolua_function(tolua_S,"GetWarmStarting",tolua_Box2D_b2World_GetWarmStarting00);
   tolua_function(tolua_S,"SetContinuousPhysics",tolua_Box2D_b2World_SetContinuousPhysics00);
   tolua_function(tolua_S,"GetContinuousPhysics",tolua_Box2D_b2World_GetContinuousPhysics00);
   tolua_function(tolua_S,"SetSubStepping",tolua_Box2D_b2World_SetSubStepping00);
   tolua_function(tolua_S,"GetSubStepping",tolua_Box2D_b2World_GetSubStepping00);
   tolua_function(tolua_S,"GetProxyCount",tolua_Box2D_b2World_GetProxyCount00);
   tolua_function(tolua_S,"GetBodyCount",tolua_Box2D_b2World_GetBodyCount00);
   tolua_function(tolua_S,"GetJointCount",tolua_Box2D_b2World_GetJointCount00);
   tolua_function(tolua_S,"GetContactCount",tolua_Box2D_b2World_GetContactCount00);
   tolua_function(tolua_S,"GetTreeHeight",tolua_Box2D_b2World_GetTreeHeight00);
   tolua_function(tolua_S,"GetTreeBalance",tolua_Box2D_b2World_GetTreeBalance00);
   tolua_function(tolua_S,"GetTreeQuality",tolua_Box2D_b2World_GetTreeQuality00);
   tolua_function(tolua_S,"SetGravity",tolua_Box2D_b2World_SetGravity00);
   tolua_function(tolua_S,"GetGravity",tolua_Box2D_b2World_GetGravity00);
   tolua_function(tolua_S,"IsLocked",tolua_Box2D_b2World_IsLocked00);
   tolua_function(tolua_S,"SetAutoClearForces",tolua_Box2D_b2World_SetAutoClearForces00);
   tolua_function(tolua_S,"GetAutoClearForces",tolua_Box2D_b2World_GetAutoClearForces00);
   tolua_function(tolua_S,"Dump",tolua_Box2D_b2World_Dump00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"b2_staticBody",b2_staticBody);
  tolua_constant(tolua_S,"b2_kinematicBody",b2_kinematicBody);
  tolua_constant(tolua_S,"b2_dynamicBody",b2_dynamicBody);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2BodyDef","b2BodyDef","",tolua_collect_b2BodyDef);
  #else
  tolua_cclass(tolua_S,"b2BodyDef","b2BodyDef","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2BodyDef");
   tolua_function(tolua_S,"new",tolua_Box2D_b2BodyDef_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2BodyDef_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2BodyDef_new00_local);
   tolua_variable(tolua_S,"type",tolua_get_b2BodyDef_type,tolua_set_b2BodyDef_type);
   tolua_variable(tolua_S,"position",tolua_get_b2BodyDef_position,tolua_set_b2BodyDef_position);
   tolua_variable(tolua_S,"angle",tolua_get_b2BodyDef_angle,tolua_set_b2BodyDef_angle);
   tolua_variable(tolua_S,"linearVelocity",tolua_get_b2BodyDef_linearVelocity,tolua_set_b2BodyDef_linearVelocity);
   tolua_variable(tolua_S,"angularVelocity",tolua_get_b2BodyDef_angularVelocity,tolua_set_b2BodyDef_angularVelocity);
   tolua_variable(tolua_S,"linearDamping",tolua_get_b2BodyDef_linearDamping,tolua_set_b2BodyDef_linearDamping);
   tolua_variable(tolua_S,"angularDamping",tolua_get_b2BodyDef_angularDamping,tolua_set_b2BodyDef_angularDamping);
   tolua_variable(tolua_S,"allowSleep",tolua_get_b2BodyDef_allowSleep,tolua_set_b2BodyDef_allowSleep);
   tolua_variable(tolua_S,"awake",tolua_get_b2BodyDef_awake,tolua_set_b2BodyDef_awake);
   tolua_variable(tolua_S,"fixedRotation",tolua_get_b2BodyDef_fixedRotation,tolua_set_b2BodyDef_fixedRotation);
   tolua_variable(tolua_S,"bullet",tolua_get_b2BodyDef_bullet,tolua_set_b2BodyDef_bullet);
   tolua_variable(tolua_S,"active",tolua_get_b2BodyDef_active,tolua_set_b2BodyDef_active);
   tolua_variable(tolua_S,"userData",tolua_get_b2BodyDef_userData,tolua_set_b2BodyDef_userData);
   tolua_variable(tolua_S,"gravityScale",tolua_get_b2BodyDef_gravityScale,tolua_set_b2BodyDef_gravityScale);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"b2Body","b2Body","",NULL);
  tolua_beginmodule(tolua_S,"b2Body");
   tolua_function(tolua_S,"CreateFixture",tolua_Box2D_b2Body_CreateFixture00);
   tolua_function(tolua_S,"CreateFixture",tolua_Box2D_b2Body_CreateFixture01);
   tolua_function(tolua_S,"DestroyFixture",tolua_Box2D_b2Body_DestroyFixture00);
   tolua_function(tolua_S,"SetTransform",tolua_Box2D_b2Body_SetTransform00);
   tolua_function(tolua_S,"GetTransform",tolua_Box2D_b2Body_GetTransform00);
   tolua_function(tolua_S,"GetPosition",tolua_Box2D_b2Body_GetPosition00);
   tolua_function(tolua_S,"GetAngle",tolua_Box2D_b2Body_GetAngle00);
   tolua_function(tolua_S,"GetWorldCenter",tolua_Box2D_b2Body_GetWorldCenter00);
   tolua_function(tolua_S,"GetLocalCenter",tolua_Box2D_b2Body_GetLocalCenter00);
   tolua_function(tolua_S,"SetLinearVelocity",tolua_Box2D_b2Body_SetLinearVelocity00);
   tolua_function(tolua_S,"GetLinearVelocity",tolua_Box2D_b2Body_GetLinearVelocity00);
   tolua_function(tolua_S,"SetAngularVelocity",tolua_Box2D_b2Body_SetAngularVelocity00);
   tolua_function(tolua_S,"GetAngularVelocity",tolua_Box2D_b2Body_GetAngularVelocity00);
   tolua_function(tolua_S,"ApplyForce",tolua_Box2D_b2Body_ApplyForce00);
   tolua_function(tolua_S,"ApplyForceToCenter",tolua_Box2D_b2Body_ApplyForceToCenter00);
   tolua_function(tolua_S,"ApplyTorque",tolua_Box2D_b2Body_ApplyTorque00);
   tolua_function(tolua_S,"ApplyLinearImpulse",tolua_Box2D_b2Body_ApplyLinearImpulse00);
   tolua_function(tolua_S,"ApplyAngularImpulse",tolua_Box2D_b2Body_ApplyAngularImpulse00);
   tolua_function(tolua_S,"GetMass",tolua_Box2D_b2Body_GetMass00);
   tolua_function(tolua_S,"GetInertia",tolua_Box2D_b2Body_GetInertia00);
   tolua_function(tolua_S,"GetMassData",tolua_Box2D_b2Body_GetMassData00);
   tolua_function(tolua_S,"SetMassData",tolua_Box2D_b2Body_SetMassData00);
   tolua_function(tolua_S,"ResetMassData",tolua_Box2D_b2Body_ResetMassData00);
   tolua_function(tolua_S,"GetWorldPoint",tolua_Box2D_b2Body_GetWorldPoint00);
   tolua_function(tolua_S,"GetWorldVector",tolua_Box2D_b2Body_GetWorldVector00);
   tolua_function(tolua_S,"GetLocalPoint",tolua_Box2D_b2Body_GetLocalPoint00);
   tolua_function(tolua_S,"GetLocalVector",tolua_Box2D_b2Body_GetLocalVector00);
   tolua_function(tolua_S,"GetLinearVelocityFromWorldPoint",tolua_Box2D_b2Body_GetLinearVelocityFromWorldPoint00);
   tolua_function(tolua_S,"GetLinearVelocityFromLocalPoint",tolua_Box2D_b2Body_GetLinearVelocityFromLocalPoint00);
   tolua_function(tolua_S,"GetLinearDamping",tolua_Box2D_b2Body_GetLinearDamping00);
   tolua_function(tolua_S,"SetLinearDamping",tolua_Box2D_b2Body_SetLinearDamping00);
   tolua_function(tolua_S,"GetAngularDamping",tolua_Box2D_b2Body_GetAngularDamping00);
   tolua_function(tolua_S,"SetAngularDamping",tolua_Box2D_b2Body_SetAngularDamping00);
   tolua_function(tolua_S,"GetGravityScale",tolua_Box2D_b2Body_GetGravityScale00);
   tolua_function(tolua_S,"SetGravityScale",tolua_Box2D_b2Body_SetGravityScale00);
   tolua_function(tolua_S,"SetType",tolua_Box2D_b2Body_SetType00);
   tolua_function(tolua_S,"GetType",tolua_Box2D_b2Body_GetType00);
   tolua_function(tolua_S,"SetBullet",tolua_Box2D_b2Body_SetBullet00);
   tolua_function(tolua_S,"IsBullet",tolua_Box2D_b2Body_IsBullet00);
   tolua_function(tolua_S,"SetSleepingAllowed",tolua_Box2D_b2Body_SetSleepingAllowed00);
   tolua_function(tolua_S,"IsSleepingAllowed",tolua_Box2D_b2Body_IsSleepingAllowed00);
   tolua_function(tolua_S,"SetAwake",tolua_Box2D_b2Body_SetAwake00);
   tolua_function(tolua_S,"IsAwake",tolua_Box2D_b2Body_IsAwake00);
   tolua_function(tolua_S,"SetActive",tolua_Box2D_b2Body_SetActive00);
   tolua_function(tolua_S,"IsActive",tolua_Box2D_b2Body_IsActive00);
   tolua_function(tolua_S,"SetFixedRotation",tolua_Box2D_b2Body_SetFixedRotation00);
   tolua_function(tolua_S,"IsFixedRotation",tolua_Box2D_b2Body_IsFixedRotation00);
   tolua_function(tolua_S,"GetFixtureList",tolua_Box2D_b2Body_GetFixtureList00);
   tolua_function(tolua_S,"GetFixtureList",tolua_Box2D_b2Body_GetFixtureList01);
   tolua_function(tolua_S,"GetJointList",tolua_Box2D_b2Body_GetJointList00);
   tolua_function(tolua_S,"GetJointList",tolua_Box2D_b2Body_GetJointList01);
   tolua_function(tolua_S,"GetContactList",tolua_Box2D_b2Body_GetContactList00);
   tolua_function(tolua_S,"GetContactList",tolua_Box2D_b2Body_GetContactList01);
   tolua_function(tolua_S,"GetNext",tolua_Box2D_b2Body_GetNext00);
   tolua_function(tolua_S,"GetNext",tolua_Box2D_b2Body_GetNext01);
   tolua_function(tolua_S,"GetUserData",tolua_Box2D_b2Body_GetUserData00);
   tolua_function(tolua_S,"SetUserData",tolua_Box2D_b2Body_SetUserData00);
   tolua_function(tolua_S,"GetWorld",tolua_Box2D_b2Body_GetWorld00);
   tolua_function(tolua_S,"GetWorld",tolua_Box2D_b2Body_GetWorld01);
   tolua_function(tolua_S,"Dump",tolua_Box2D_b2Body_Dump00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2Filter","b2Filter","",tolua_collect_b2Filter);
  #else
  tolua_cclass(tolua_S,"b2Filter","b2Filter","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2Filter");
   tolua_function(tolua_S,"new",tolua_Box2D_b2Filter_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2Filter_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2Filter_new00_local);
   tolua_variable(tolua_S,"categoryBits",tolua_get_b2Filter_unsigned_categoryBits,tolua_set_b2Filter_unsigned_categoryBits);
   tolua_variable(tolua_S,"maskBits",tolua_get_b2Filter_unsigned_maskBits,tolua_set_b2Filter_unsigned_maskBits);
   tolua_variable(tolua_S,"groupIndex",tolua_get_b2Filter_groupIndex,tolua_set_b2Filter_groupIndex);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2FixtureDef","b2FixtureDef","",tolua_collect_b2FixtureDef);
  #else
  tolua_cclass(tolua_S,"b2FixtureDef","b2FixtureDef","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2FixtureDef");
   tolua_function(tolua_S,"new",tolua_Box2D_b2FixtureDef_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2FixtureDef_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2FixtureDef_new00_local);
   tolua_variable(tolua_S,"shape",tolua_get_b2FixtureDef_shape_ptr,tolua_set_b2FixtureDef_shape_ptr);
   tolua_variable(tolua_S,"userData",tolua_get_b2FixtureDef_userData,tolua_set_b2FixtureDef_userData);
   tolua_variable(tolua_S,"friction",tolua_get_b2FixtureDef_friction,tolua_set_b2FixtureDef_friction);
   tolua_variable(tolua_S,"restitution",tolua_get_b2FixtureDef_restitution,tolua_set_b2FixtureDef_restitution);
   tolua_variable(tolua_S,"density",tolua_get_b2FixtureDef_density,tolua_set_b2FixtureDef_density);
   tolua_variable(tolua_S,"isSensor",tolua_get_b2FixtureDef_isSensor,tolua_set_b2FixtureDef_isSensor);
   tolua_variable(tolua_S,"filter",tolua_get_b2FixtureDef_filter,tolua_set_b2FixtureDef_filter);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"b2FixtureProxy","b2FixtureProxy","",NULL);
  tolua_beginmodule(tolua_S,"b2FixtureProxy");
   tolua_variable(tolua_S,"aabb",tolua_get_b2FixtureProxy_aabb,tolua_set_b2FixtureProxy_aabb);
   tolua_variable(tolua_S,"fixture",tolua_get_b2FixtureProxy_fixture_ptr,tolua_set_b2FixtureProxy_fixture_ptr);
   tolua_variable(tolua_S,"childIndex",tolua_get_b2FixtureProxy_childIndex,tolua_set_b2FixtureProxy_childIndex);
   tolua_variable(tolua_S,"proxyId",tolua_get_b2FixtureProxy_proxyId,tolua_set_b2FixtureProxy_proxyId);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"b2Fixture","b2Fixture","",NULL);
  tolua_beginmodule(tolua_S,"b2Fixture");
   tolua_function(tolua_S,"GetType",tolua_Box2D_b2Fixture_GetType00);
   tolua_function(tolua_S,"GetShape",tolua_Box2D_b2Fixture_GetShape00);
   tolua_function(tolua_S,"GetShape",tolua_Box2D_b2Fixture_GetShape01);
   tolua_function(tolua_S,"SetSensor",tolua_Box2D_b2Fixture_SetSensor00);
   tolua_function(tolua_S,"IsSensor",tolua_Box2D_b2Fixture_IsSensor00);
   tolua_function(tolua_S,"SetFilterData",tolua_Box2D_b2Fixture_SetFilterData00);
   tolua_function(tolua_S,"GetFilterData",tolua_Box2D_b2Fixture_GetFilterData00);
   tolua_function(tolua_S,"Refilter",tolua_Box2D_b2Fixture_Refilter00);
   tolua_function(tolua_S,"GetBody",tolua_Box2D_b2Fixture_GetBody00);
   tolua_function(tolua_S,"GetBody",tolua_Box2D_b2Fixture_GetBody01);
   tolua_function(tolua_S,"GetNext",tolua_Box2D_b2Fixture_GetNext00);
   tolua_function(tolua_S,"GetNext",tolua_Box2D_b2Fixture_GetNext01);
   tolua_function(tolua_S,"GetUserData",tolua_Box2D_b2Fixture_GetUserData00);
   tolua_function(tolua_S,"SetUserData",tolua_Box2D_b2Fixture_SetUserData00);
   tolua_function(tolua_S,"TestPoint",tolua_Box2D_b2Fixture_TestPoint00);
   tolua_function(tolua_S,"RayCast",tolua_Box2D_b2Fixture_RayCast00);
   tolua_function(tolua_S,"GetMassData",tolua_Box2D_b2Fixture_GetMassData00);
   tolua_function(tolua_S,"SetDensity",tolua_Box2D_b2Fixture_SetDensity00);
   tolua_function(tolua_S,"GetDensity",tolua_Box2D_b2Fixture_GetDensity00);
   tolua_function(tolua_S,"GetFriction",tolua_Box2D_b2Fixture_GetFriction00);
   tolua_function(tolua_S,"SetFriction",tolua_Box2D_b2Fixture_SetFriction00);
   tolua_function(tolua_S,"GetRestitution",tolua_Box2D_b2Fixture_GetRestitution00);
   tolua_function(tolua_S,"SetRestitution",tolua_Box2D_b2Fixture_SetRestitution00);
   tolua_function(tolua_S,"GetAABB",tolua_Box2D_b2Fixture_GetAABB00);
   tolua_function(tolua_S,"Dump",tolua_Box2D_b2Fixture_Dump00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"b2MassData","b2MassData","",NULL);
  tolua_beginmodule(tolua_S,"b2MassData");
   tolua_variable(tolua_S,"mass",tolua_get_b2MassData_mass,tolua_set_b2MassData_mass);
   tolua_variable(tolua_S,"center",tolua_get_b2MassData_center,tolua_set_b2MassData_center);
   tolua_variable(tolua_S,"I",tolua_get_b2MassData_I,tolua_set_b2MassData_I);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2Shape","b2Shape","",tolua_collect_b2Shape);
  #else
  tolua_cclass(tolua_S,"b2Shape","b2Shape","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2Shape");
   tolua_constant(tolua_S,"e_circle",b2Shape::e_circle);
   tolua_constant(tolua_S,"e_edge",b2Shape::e_edge);
   tolua_constant(tolua_S,"e_polygon",b2Shape::e_polygon);
   tolua_constant(tolua_S,"e_chain",b2Shape::e_chain);
   tolua_constant(tolua_S,"e_typeCount",b2Shape::e_typeCount);
   tolua_function(tolua_S,"delete",tolua_Box2D_b2Shape_delete00);
   tolua_function(tolua_S,"Clone",tolua_Box2D_b2Shape_Clone00);
   tolua_function(tolua_S,"GetType",tolua_Box2D_b2Shape_GetType00);
   tolua_function(tolua_S,"GetChildCount",tolua_Box2D_b2Shape_GetChildCount00);
   tolua_function(tolua_S,"TestPoint",tolua_Box2D_b2Shape_TestPoint00);
   tolua_function(tolua_S,"RayCast",tolua_Box2D_b2Shape_RayCast00);
   tolua_function(tolua_S,"ComputeAABB",tolua_Box2D_b2Shape_ComputeAABB00);
   tolua_function(tolua_S,"ComputeMass",tolua_Box2D_b2Shape_ComputeMass00);
   tolua_variable(tolua_S,"m_type",tolua_get_b2Shape_m_type,tolua_set_b2Shape_m_type);
   tolua_variable(tolua_S,"m_radius",tolua_get_b2Shape_m_radius,tolua_set_b2Shape_m_radius);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"b2PolygonShape","b2PolygonShape","b2Shape",tolua_collect_b2PolygonShape);
  #else
  tolua_cclass(tolua_S,"b2PolygonShape","b2PolygonShape","b2Shape",NULL);
  #endif
  tolua_beginmodule(tolua_S,"b2PolygonShape");
   tolua_function(tolua_S,"new",tolua_Box2D_b2PolygonShape_new00);
   tolua_function(tolua_S,"new_local",tolua_Box2D_b2PolygonShape_new00_local);
   tolua_function(tolua_S,".call",tolua_Box2D_b2PolygonShape_new00_local);
   tolua_function(tolua_S,"Clone",tolua_Box2D_b2PolygonShape_Clone00);
   tolua_function(tolua_S,"GetChildCount",tolua_Box2D_b2PolygonShape_GetChildCount00);
   tolua_function(tolua_S,"Set",tolua_Box2D_b2PolygonShape_Set00);
   tolua_function(tolua_S,"SetAsBox",tolua_Box2D_b2PolygonShape_SetAsBox00);
   tolua_function(tolua_S,"SetAsBox",tolua_Box2D_b2PolygonShape_SetAsBox01);
   tolua_function(tolua_S,"TestPoint",tolua_Box2D_b2PolygonShape_TestPoint00);
   tolua_function(tolua_S,"RayCast",tolua_Box2D_b2PolygonShape_RayCast00);
   tolua_function(tolua_S,"ComputeAABB",tolua_Box2D_b2PolygonShape_ComputeAABB00);
   tolua_function(tolua_S,"ComputeMass",tolua_Box2D_b2PolygonShape_ComputeMass00);
   tolua_function(tolua_S,"GetVertexCount",tolua_Box2D_b2PolygonShape_GetVertexCount00);
   tolua_function(tolua_S,"GetVertex",tolua_Box2D_b2PolygonShape_GetVertex00);
   tolua_variable(tolua_S,"m_centroid",tolua_get_b2PolygonShape_m_centroid,tolua_set_b2PolygonShape_m_centroid);
   tolua_array(tolua_S,"m_vertices",tolua_get_Box2D_b2PolygonShape_m_vertices,tolua_set_Box2D_b2PolygonShape_m_vertices);
   tolua_array(tolua_S,"m_normals",tolua_get_Box2D_b2PolygonShape_m_normals,tolua_set_Box2D_b2PolygonShape_m_normals);
   tolua_variable(tolua_S,"m_vertexCount",tolua_get_b2PolygonShape_m_vertexCount,tolua_set_b2PolygonShape_m_vertexCount);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Box2D (lua_State* tolua_S) {
 return tolua_Box2D_open(tolua_S);
};
#endif

