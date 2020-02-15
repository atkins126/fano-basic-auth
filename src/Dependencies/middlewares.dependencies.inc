(*!------------------------------------------------------------
 * [[APP_NAME]] ([[APP_URL]])
 *
 * @link      [[APP_REPOSITORY_URL]]
 * @copyright Copyright (c) [[COPYRIGHT_YEAR]] [[COPYRIGHT_HOLDER]]
 * @license   [[LICENSE_URL]] ([[LICENSE]])
 *------------------------------------------------------------- *)

{%dependencies.inc}

container.add(
    'basicAuthMiddleware',
    TStaticCredentialsBasicAuthMiddlewareFactory.create('fano-realm')
        .addCredential('hello@fano', 'world')
        .addCredential('hi@fano', 'nice')
);
